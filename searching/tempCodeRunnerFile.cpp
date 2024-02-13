int even[6]={2,4,6,8,10,12};
    int odd[5]={3,6,9,12,15};

    int evenindex = binarysearch( even , 6 , 12/*=key*/);
    
    cout<< "Index of 12 is =" <<" "<< evenindex << endl;
    
    int oddindex = binarysearch( odd , 5 , 9/*=key*/);

    cout<<"Index of 9 is ="<<" "<< oddindex << endl;
