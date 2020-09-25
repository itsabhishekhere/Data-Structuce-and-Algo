int main()
{

int arr = {2,3,4,10,40};
int x =10;
int n = 15;
int result = binarysearch(arr,0,n-1,x);
printf("%d",result);
}
int binarysearch(int arr[],int l, int r, int x)
{
    int mid;
    if(r>=1)
        mid = (l+r)/2;
    if(arr[mid]==x)
        return mid;
    if(arr[mid]>x)
        return binarysearch(arr,l,mid-1,x);
    else
       return binarysearch(arr,mid+1,r,x);
}
