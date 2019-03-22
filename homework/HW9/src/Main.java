import java.io.*;

class Main {

    public static void main(String args[]) {

        MyList mlArray = new MyList();
        mlArray.add(1);
        mlArray.add(2);
        mlArray.add(3);
        String ostr = mlArray.toString();
        System.out.println(ostr);



        /*MyList tmp = new LongList(0);
        for (int i = 1; i < 11; i++) {
            tmp = new LongList((LongList) tmp, i);
        }
        mlArray[0] = tmp;

        tmp = new IntList(0);
        for (int i = 1; i < 11; i++) {
            tmp = new IntList((IntList) tmp, i);
        }
        mlArray[1] = tmp;

        for (int list = 0; list < 2; list++) {
            MyList ml = mlArray[list];
            while (ml != null) {
                ml.printNode( );
                System.out.println( );
                ml = ml.next( );
            }
        }*/
    }
}
