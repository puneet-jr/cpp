// // import java.util.*;
// // class puneet{
// //     public static void main(String[] args)
// //     {
// //        Scanner sc=new Scanner(System.in);
// //        int[] puneet= new int[5];
    
// //        for(int i=0;i<puneet.length;i++)
// //        {
// //           sc.nextInt(puneet[i]);
// //        }

// //        for(int i=0;i<puneet.length;i++)
// //        {
// //         System.out.print(puneet[i]+" ");
// //        }
// //     }
// // }

// // import java.util.*;

// // class puneet {
// //     public static void main(String args[]) {
// //         Scanner sc = new Scanner(System.in);
// //         int n = sc.nextInt(); // Number to toggle a bit in
// //         int pos = sc.nextInt(); // Position of the bit to toggle
// //         int mask = 1 << pos; // Create a mask with a 1 at the desired position

// //         int newnum = n ^ mask; // Toggle the bit at position pos
// //         System.out.print(newnum); // Print the number after toggling the bit
// //     }
// // }
// // import java.util.*;

// // class puneet {
// //     public static void main(String args[]) {
// //         Scanner sc = new Scanner(System.in);
// //         int n = sc.nextInt(); // Number to toggle a bit in
// //         int pos = sc.nextInt(); // Position of the bit to toggle
// //         int mask = 1 << pos; // Create a mask with a 1 at the desired position

// //         // Check if the bit at position pos is set or not
// //         boolean isBitSet = (n & mask) != 0;

// //         int newnum;
// //         if (isBitSet) {
// //             // If the bit is set, clear it
// //             newnum = n & ~mask;
// //         } else {
// //             // If the bit is not set, set it
// //             newnum = n | mask;
// //         }

// //         System.out.print(newnum); // Print the number after toggling the bit
// //     }
// // }


// // import java.util.Scanner;

// // class Hello {
// //     int name; // Declare name as an instance variable
// //     int show; // Declare show as an instance variable

// //     Hello() {
// //         Scanner sc = new Scanner(System.in);
// //         name = sc.nextInt(); // Initialize name with user input
// //         show = sc.nextInt(); // Initialize show with user input
// //         sc.close(); // Close the scanner
// //     }
// //     void output()
// //     {
// //         System.out.println(name); // Print the name variable of object h
// //         System.out.println(show); // Corrected to print the show variable of object h
// //     }
// // }

// // public class hero {
// //     public static void main(String args[]) {
// //         Hello h = new Hello();
// //         // System.out.println(h.name); // Print the name variable of object h
// //         // System.out.println(h.show); // Corrected to print the show variable of object h
// //         h.output();
// //     }
// // }
import java.util.Scanner;

class Rectangle {
    int length;
    int breadth;

    // Constructor to initialize length and breadth
    public Rectangle(int length, int breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    // Method to calculate area
    public int calculateArea() {
        return length * breadth;
    }
}

public class GFG {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int p = sc.nextInt();
        int q = sc.nextInt();
        
        // Create a Rectangle object with user input dimensions
        Rectangle rect = new Rectangle(p, q);
        
        // Calculate and print the area
        System.out.println(rect.calculateArea());
    }
}
