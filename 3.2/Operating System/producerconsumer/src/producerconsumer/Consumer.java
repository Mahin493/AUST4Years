
package producerconsumer;

/**
 *
 * @author Mahin Opu
 */
import java.util.concurrent.BlockingQueue;

public class Consumer implements Runnable {
    BlockingQueue<String> q;
    Thread t;
    String name;

    Consumer(BlockingQueue<String> q, String name){
        this.q = q;
        this.name = name;
        t = new Thread(this, name);
        t.start();
    }

    @Override
    public void run() {
        //System.out.println(name+ "started...");
        while (true) {
            try {
                if(q.size()==0){
                    System.out.println(name+ ": Queue is empty...");
                    Thread.sleep(2000);
                }
                System.out.println(name+"Consumed "+q.take()+ " from the buffer "+"\nOccupied Space : "+ q.size());
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}