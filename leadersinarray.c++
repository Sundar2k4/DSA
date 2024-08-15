class Solution {
  public:
    vector<int> leaders(int n, int arr[]) {
        vector<int> ar;
        for (int i = 0; i < n; i++) {
            bool isLeader = true;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] > arr[i]) {
                    isLeader = false;
                    break;
                }
            }
            if (isLeader) {
                ar.push_back(arr[i]);
            }
        }
        return ar;
    }
};
