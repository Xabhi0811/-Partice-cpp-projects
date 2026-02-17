

for(i =0 ; i <n ;i++){
    int tem = arr[i]
    j= i-1;

    for(; i<n ; j++){

    
    if(arr[j]>tem)
    // shift karo
    {
        arr[j+1] = arr[j]
    }
    else{
        break;
    }
}

    arr[j+1] = tem;

}