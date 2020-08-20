void QSort(int a[],int lb,int ub)
{
	int down,up;
	down = lb;
	up=ub;
		
	if(lb>=ub)
		return;
	pivot = x[lb];
	while(up>down)
	{
		while(x[down]<=pivot)
			down++;
		while(x[up]>pivot)
			up--;
		if(down<up)
			swap(x[down],x[up]);
	}
	x[lb]=x[up];
	x[up]=pivot;
	QSort(a,lb,up-1);
	QSort(a,up+1,ub);
}