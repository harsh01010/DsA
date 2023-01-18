 int tour(petrolPump p[],int n)
    {
       int start = 0;
       int fuel = 0;
       int lessFuel = 0;
       for(int i=0;i<n;i++)
       {
             fuel += p[i].petrol - p[i].distance;
             
             if(fuel < 0 )
             {
                  lessFuel += fuel;
                  start = i+1;
                  fuel = 0;
             }
       }
       if(fuel + lessFuel >= 0) return start;
       else return -1;
    }