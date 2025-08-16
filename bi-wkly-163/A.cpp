class Solution
{
public:
    int minSensors(int n, int m, int k)
    {
        long long span = 2LL * k + 1;

        long long rows = (n + span - 1) / span;
        long long cols = (m + span - 1) / span;

        return (int)(rows * cols);
    }
};
