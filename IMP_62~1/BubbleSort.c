void bubblesort(int a[],int n)
{

	int pass,j,temp;

	int flag=1;	
	for(pass=0;pass<n-1&&flag==1;pass++)
	{
		flag=0;
		for(j=0;j<n-pass-1;j++)
		{
			if(a[j]>a[j+1]
			{
				flag=1;
				interchange(a[j],a[j+1]);
			}
		}
	}
}