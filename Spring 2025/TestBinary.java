public class TestBinary
{
   public static void main(String[] args )
   {
      displayNum( 'A' );
   }
   
   public static void displayNum( int num )
   {
      int i = 0;
      while( num > 0 )
      {
         int rem = num % 2;
         if( rem == 1 )
         {
            System.out.print( "1 " );    
         }
         else
         {
            System.out.print( "0 " );    
         }
         num /= 2;  
         i++;
      }
   }
}