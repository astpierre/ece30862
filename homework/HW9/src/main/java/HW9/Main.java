package HW9;

import org.joda.time.LocalTime;

class Main {
    public static void main(String args[]) {
        System.out.println("HEY, I WORK!");
        MyList ml = new MyList();
        System.out.println(ml.sayHello());

        LocalTime currentTime = new LocalTime();
        System.out.println("The current local time is: " + currentTime);

        /*MyList [ ] mlArray = new MyList[2];


        MyList tmp = new LongList(0);
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
