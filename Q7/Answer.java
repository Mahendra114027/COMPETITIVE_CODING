import java.util.*;

public class Answer {
    public static boolean canWin(int leap, int[] game, int i) {        
        int n = game.length;
        if( (i+1) >= n || (i+leap) >= n ){
            return true;
        }
        if( game[i+leap]==0 ){
            game[i+leap]=1;
            if( canWin(leap, game, i+leap)==true ){
                return true;
            }else{
                game[i+leap]=0;
            }
        }
        if( game[i+1]==0 ){
            game[i+1]=1;
            if( canWin(leap, game, i+1)==true ){
                return true;
            }else{
                game[i+1]=0;
            }
        }
        if( (i-1)>=0  && game[i-1]==0 ){
            game[i-1]=1;
            if( canWin(leap, game, i-1)==true ){
                return true;
            }else{
                game[i-1]=0;
            }
        }
        return false;
    }
    
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int q = scan.nextInt();
        while (q-- > 0) {
            int n = scan.nextInt();
            int leap = scan.nextInt();
            int []visited= new int[n];
            int[] game = new int[n];
            for (int i = 0; i < n; i++) {
                game[i] = scan.nextInt();
                visited[i]=game[i];
            }

            System.out.println( (canWin(leap, game, 0)) ? "YES" : "NO" );
        }
        scan.close();
    }
}