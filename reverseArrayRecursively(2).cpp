// using 1 pointer

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp; 
}

void rev(int l, int arr[], int n){
    if(l>=(n/2)) return;
    swap(arr[l], arr[n-l-1]);
    rev(l+1, arr, n);
}

void func(int arr[], int n){
    if(n<=1) return;
    rev(0, arr, n);
    return;
}