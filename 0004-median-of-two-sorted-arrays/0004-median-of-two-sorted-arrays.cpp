class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        vector<double> arr(nums1.size() + nums2.size());
        int j = 0;

        for (int i : nums1) arr[j++] = i;
        for (int i : nums2) arr[j++] = i;

        sort(arr.begin(), arr.end());

        if (arr.size() % 2 == 0) {
            return (arr[arr.size() / 2] + arr[arr.size() / 2 - 1]) / 2;
        } else {
            return arr[arr.size() / 2];
        }
    }
};