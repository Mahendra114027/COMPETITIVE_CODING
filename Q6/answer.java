import java.io.BufferedReader;
import java.io.InputStreamReader;


class TestClass {
      public static void main(String args[] ) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
          String line = br.readLine();
          int N = Integer.parseInt(line);
          int monk=0;
          for (int i = 0; i < N; i++) {
           line=br.readLine();
           String str[]=new String[2];
           str=line.split(" ");
           int a=Integer.parseInt(str[0]);
           int b=Integer.parseInt(str[1]);         
           int arr[]=new int[a];
          
           line=br.readLine();
           String st1[]=new String[a];
           st1=line.split(" ");
           for(int l=0;l<st1.length;l++){
            arr[l]=Integer.parseInt(st1[l]);
           }
              for(int j=0;j<b;j++){
               long max=0;
                  int d=0;
      for(int k=0;k<arr.length-1;k++){
       if(arr[k]>arr[k+1]&&arr[k]>max){
       max=arr[k];
       d=k;
       }else if(arr[k]<arr[k+1]&&arr[k+1]>max){
       max=(long)arr[k+1];
       d=k+1;
       }
      }
      
      arr[d]/=2;
     
      monk+=max;
     
     }  
    
              }
          System.out.print(monk);
              
           
       }
}