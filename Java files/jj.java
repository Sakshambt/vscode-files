import java.io.*;
class jj
{
    public static void main(String[]args)throws IOException {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        for(int i=1;i<=(n+1)/2;i++){
            for(int k = i;k<=(n+1)/2;k++){
                for(int j=1;j<=i;j++){
                    System.out.print("@ ");

                }
                System.out.print(" ");
            }
            System.out.println();

        }
    }
}