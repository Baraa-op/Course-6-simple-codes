 int arr [10] [10] ;
    
    for(int i = 1 ; i < 10 ; i++)
    {
    	for(int j = 1 ; j < 10 ; j++)
		    {
    			arr[i][j] = (i+1) * (j+1);
		    }
    }
    
    for(int i = 1 ; i < 10 ; i++)
    {
    	for(int j = 1 ; j <10 ; j++)
		    {
    				
    				printf("%0*d " , 2 , arr[i][j]) ;
    				
		    }
		    
		    cout << " \n" ;
    }
    
