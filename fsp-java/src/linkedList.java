//class Node {
//    int data;
//    Node next;
//
//    Node(int data) {
//        this.data = data;
//        this.next = null;
//    }
//}
//
//public class linkedList {
//    public static void main(String[] args) {
//
//        Node head = new Node(10);
//        Node b = new Node(20);
//        Node c = new Node(30);
//        head.next = b;
//        b.next = c;
////        c.next = null;
//
//        Node temp = head;
//
//        while(temp!=null){
//            System.out.println(temp.data);
//            temp = temp.next;
//        }
//
//    }
//}

class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

class LinkedList {
    Node head;

    void insertAtEnd(int data) {
        // YOUR CODE

        if(head == null){
            head = new Node(data);
        }
        else{
            Node newNode = new Node(data);

            Node temp = head;
            while(temp.next!=null){
                temp = temp.next;
            }
            temp.next = newNode;
        }

    }

    void insertAtBeginning(int data) {
        Node newNode = new Node(data);
        newNode.next = head;
        head = newNode;

    }

    void insertAtPosition(int data, int position){
        Node newNode = new Node(data);
        int count = 0;
        Node temp = head;
        while(count != position-1){
            temp = temp.next;
            count++;
        }
        newNode.next = temp.next;
        temp.next = newNode;
    }

    void deleteAtBeginning() {
        // your code

        head = head.next;
    }

    void deleteAtEnd() {
        // your code
        Node temp = head;
        while(temp.next.next!=null){
            temp = temp.next;
        }
        temp.next = null;
    }

    void display() {
        // YOUR CODE

        Node temp = head;
        while(temp!=null){
            System.out.println(temp.data);
            temp = temp.next;
        }
    }
}

public class linkedList {
    public static void main(String[] args) {

        LinkedList list = new LinkedList();

        list.insertAtBeginning(10);
        list.insertAtBeginning(20);
        list.insertAtBeginning(30);


        list.display();
    }
}