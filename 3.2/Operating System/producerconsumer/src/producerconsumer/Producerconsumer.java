
package producerconsumer;

/**
 *
 * @author Mahin Opu
 */
import java.util.concurrent.ArrayBlockingQueue;
import java.util.concurrent.BlockingQueue;
public class Producerconsumer {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
         BlockingQueue<String> q = new ArrayBlockingQueue<>(4);
        Producer producer1 = new Producer(q, "Producer 1:");
        Consumer consumer1 = new Consumer(q, "Consumer 1:");
        Consumer consumer2 = new Consumer(q, "Consumer 2:");
        
       // Consumer consumer3 = new Consumer(q, "Consumer 3:");
    }
    
}
