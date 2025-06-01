#include <unordered_map>
using namespace std;

class LRUCache
{
public:
    class node
    {
    public:
        int key;
        int val;
        node *next;
        node *prev;

        node(int _key, int _val)
        {
            key = _key;
            val = _val;
            next = nullptr;
            prev = nullptr;
        }
    };

    node *head;
    node *tail;
    int cap;
    unordered_map<int, node *> umap;

    LRUCache(int capacity)
    {
        cap = capacity;
        head = new node(-1, -1);
        tail = new node(-1, -1);
        head->next = tail;
        tail->prev = head;
    }

    void addnode(node *newnode)
    {
        node *temp = head->next;
        newnode->next = temp;
        newnode->prev = head;
        head->next = newnode;
        temp->prev = newnode;
    }

    void deletenode(node *delnode)
    {
        node *delprev = delnode->prev;
        node *delnext = delnode->next;
        delprev->next = delnext;
        delnext->prev = delprev;
    }

    int get(int _key)
    {
        if (umap.find(_key) != umap.end())
        {
            node *resnode = umap[_key];
            int res = resnode->val;
            umap.erase(_key);
            deletenode(resnode);
            addnode(resnode);
            umap[_key] = head->next;
            return res;
        }
        return -1;
    }

    void put(int _key, int value)
    {
        if (umap.find(_key) != umap.end())
        {
            node *existing = umap[_key];
            umap.erase(_key);
            deletenode(existing);
        }

        if (umap.size() == cap)
        {
            node *lru = tail->prev;
            umap.erase(lru->key);
            deletenode(lru);
        }

        node *newnode = new node(_key, value);
        addnode(newnode);
        umap[_key] = newnode;
    }
};
