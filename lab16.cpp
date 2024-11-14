// Code to implement the gcf function goes here
int gcf(int a, int b) {
    int q, r;
    q = a / b;
    r = a % b;
    if (r != 0) {
        gcf (b, r);
    } else if (r == 0) {
        return b;
    }
}