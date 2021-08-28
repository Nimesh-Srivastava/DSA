class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        if ((nums1.size() + nums2.size()) % 2 == 1)
            return calc(nums1, nums2, ((nums1.size() + nums2.size()) / 2) + 1);
        else
            return (calc(nums1, nums2, (nums1.size() + nums2.size()) / 2) +
                    calc(nums1, nums2, (nums1.size() + nums2.size()) / 2 + 1)) /
                   2.0;
    }

    int calc(vector<int> &a, vector<int> &b, int k)
    {
        if (a.size() > b.size())
            return calc(b, a, k);

        int left = 0;
        int right = a.size();

        while (left < right)
        {
            int mid = left + (right - left) / 2;    // prevent value from going out of bound

            if (k - mid - 1 >= 0 && k - mid - 1 < b.size() && a[mid] >= b[k - mid - 1])
                right = mid;
            else
                left = mid + 1;
        }

        int a1 = left - 1 >= 0 ? a[left - 1] : INT_MIN;
        int b1 = k - 1 - left >= 0 ? b[k - 1 - left] : INT_MIN;

        return max(a1, b1);
    }
};
