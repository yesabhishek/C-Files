int binarysearch(int a[],int lb,int ub,int key)

{
	int low,mid,high;
	low = lb;
	high=ub;
	if(low>high)
		return -1;
	mid=(low+high)/2;
	if(a[mid]==key)
		return mid;
	else if(a[mid]>key)
		binarysearch(a,low,mid-1,key);
	else
		bsearch(a,mid+1,high,key);

}