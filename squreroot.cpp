int floorSqrt(int n)
{
    int s  = 0;
     int e = n ;
     int  mid = s +(e-s)/2;
     int ans = -1 ;
     while(s<=e){
         int squ = mid*mid;

         if(squ == n)
         {
            return  mid ;

         }else if( squ<n){
             ans = mid;
            s = mid +1;
         }
         else{
             e = mid -1;
         }
         mid = s +(e-s)/2;
     }
     return ans ;
}
