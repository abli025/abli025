// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    unsigned int low  = 1;
    unsigned int high = n - 1;
    while (low <= high) {
      unsigned int mid = (low + high)/2;
      if (isBadVersion(mid)) {
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    }
    return low;
}