class Solution {
    public:
      int countSubstr(string& s, int k) {
          int n = s.size();
          int count;
          for(int i=0;i<n;i++)
          {
              unordered_map<char,int> umap;
              count = 0;
              for(int j=i;j<n;j++)
              {
                  int ch = s[j]-'a';
                  umap[ch]++;
                  
                  for(auto& pair:umap)
                  {
                      if(pair.second==k)
                      {
                          count++;
                      }
                  }
              }
          }
          
          return count;
      }
  };