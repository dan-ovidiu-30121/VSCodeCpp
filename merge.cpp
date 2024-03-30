#include <iostream>
#include <vector>
using namespace std;
void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        int i = 0, j = 0;
        std::vector<int> aux(m);
        for(int k = 0; k < m; k++){
            aux[k] = nums1[k];
        }
        int k = 0;
        while(i < m && j < n){
            if(aux[i] < nums2[j]){
                nums1[k++] = aux[i++];
            }
            else{
                nums1[k++] = nums2[j++];
            }
        }
        while(i < m){
            nums1[k++] = aux[i++]; 
        }
        while(j < n){
            nums1[k++] = nums2[j++];
        }

    }
int removeElement(vector<int>& nums, int val) {
        int k = 0;
        int s = nums.size();
        for(int i = 0; i < s; i++ )
        {
            if(nums[i] != val){
               nums[k++] = nums[i];
            }
        }
        return k;
    }
int removeDuplicates(vector<int>& nums) {
        int s = nums.size();
        int k = 1;
        for(int i = 1; i < s; i++){
            if(nums[i] != nums[i - 1])
              nums[k++] = nums[i];
        }
        return k;
    }
int main()
{
    int m, n;
    cin >> m >> n;
    vector<int> nums1(m),nums2(n);
    for(int i = 0; i < m; i++){
        cin >> nums1[i];
    }
    for(int j = 0; j < n; j++){
        cin >> nums2[j];
    }
    merge(nums1,m,nums2,n);
    cout << "Merged arrays: \n";
    for(int i = 0; i < m + n; i++){
       cout << nums1[i] << ' '; 
    }
    cout << endl;
    int c = removeElement(nums1,3);
    cout << c << endl;

    return 0;
}