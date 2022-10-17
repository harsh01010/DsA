import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int m=s.nextInt();
        int [][]a=new int[n][m];
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                a[i][j]=s.nextInt();

            }
        }
        int minr=0;
        int minc=0;
        int maxr=n-1;
        int maxc=m-1;
        int nem=m*n;
        int i=0;
        int j=0;
        int cnt=0;
        while(cnt<nem) {

            for(i=minr,j=minc;i<=maxr&&cnt<nem;i++) {
                System.out.println(a[i][j]);
                cnt++;
            }
           // minr++;
            minc++;
            for(i=maxr,j=minc;j<=maxc&&cnt<nem;j++) {
                System.out.println(a[i][j]);
                cnt++;
            }
            maxr--;
            for(i=maxr,j=maxc;i>=minr&&cnt<nem;i--) {
                System.out.println(a[i][j]);
                cnt++;
            }
            maxc--;
            for(i=minr,j=maxc;j>=minc&&cnt<nem;j--) {
                System.out.println(a[i][j]);
                cnt++;
            }
            minr++;

        }


    }
