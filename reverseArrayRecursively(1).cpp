// using 2 pointers

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp; 
}

void rev(int l, int r, int arr[]){
    if(l>=r) return;
    swap(arr[l], arr[r]);
    rev(l+1, r-1, arr);
}

void func(int arr[], int n){
    if(n<=1) return;
    rev(0, n-1, arr);
    return;
}