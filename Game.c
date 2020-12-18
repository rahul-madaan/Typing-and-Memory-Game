///tasks for today
//change graphics font
//adjust anaar graphics with congo
//make graphics ki different file
//add more functions to brief description of project
//make different files. .c .h
//write function prototypes
//memory game addition
//color background and text.



///what Rahul has to do
//change sentences
//change congo
//chnage print_typing_test(), minku is reducing font of text, we will not just flash it, we will print it permanent
//collect and write all declared variable in a function in starting of the function.

#include <stdio.h>
#include<malloc.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<stdbool.h>

//2D array of 20 sentences, each having 50 words approx
char sentences_50[20][800] = {"Let us try to teach generosity and altruism, because we are born selfish. Let us understand what our own selfish genes are up to, because we may then at least have the chance to upset their designs, something that no other species has ever aspired to do" ,
 "Beginning today, treat everyone you meet as if they were going to be dead by midnight. Extend to them all the care, kindness and understanding you can muster, and do it with no thought of any reward. Your life will never be the same again.",
"Be careful what you water your dreams with. Water them with worry and fear and you will produce weeds that choke the life from your dream. Water them with optimism and you will cultivate success. Always be on the lookout for ways to nurture your dream.",
"I found that every single successful person I've ever spoken to had a turning point where they made a unequivocal decision that they were not going to live like this anymore. Some people make that decision at 15 and some people make it at 50 and most never make it at all.",
"I refuse to accept the view that mankind is so tragically bound to the starless midnight of racism and war that the bright daybreak of peace and brotherhood can never become a reality. I believe that unarmed truth and unconditional love will have the final word.",
 "In essence, you are neither inferior nor superior to anyone. True self-esteem and true humility arise out of that realization. In the eyes of the ego, self-esteem, pride and humility are contradictory. In truth, they are one and the same.",
"Too often we underestimate the power of a touch, a smile, a kind word, a listening ear, an honest compliment, or the smallest act of caring, all of which have the potential to turn a life around. Life isn't about finding yourself. Life is about creating yourself.",
"Life is a series of natural ,standard and spontaneous changes. Don't resist them because that only creates sorrow. Let reality be reality. Let things flow naturally forward in whatever way they like. Only a life lived for others is a life worth living for.",
"When life is too easy for us, we must beware or we may not be ready to meet the blows which sooner or later come to everyone, rich or poor. There is no passion to be found playing small--in settling for a life that is less than the one you are capable of living.",
"Literature adds to reality. It enriches the necessary competencies that daily life requires and provides; and in this respect, it irrigates the deserts that our lives have already become. The biggest adventure you can take is to live the life of your dreams.",
"Anyone who stops learning is old, whether at twenty or eighty. Anyone who keeps learning stays young. The greatest thing in life is to keep your mind young. Many of life's failures are people who did not realize how close they were to success when they gave up.",
"The most difficult thing is the decision to act, the rest is merely tenacity. The fears are paper tigers. You can do anything you decide to do. You can act to change, adjust and control your life; and the procedure, the process is its own reward.",
"Fight for your dreams. You must know what you want from life. There is one thing that makes your dream become impossible: the fear of failure. The quality of a person's life is in direct proportion to their commitment to excellence in chosen field of endeavor.",
 "Our greatest happiness does not depend on the condition of life, but is always the result of a good conscience, occupation, and freedom. Life takes on meaning when you become motivated, set goals and charge after them in an unstoppable manner.",
"Today is life the only life you are sure of. Make the most of today. Get interested in something. Develop a hobby. Let the winds of enthusiasm sweep through you. Live today with gusto. In three words I can sum up everything I've learned about life, it goes on.",
"Transformation is a process, and as life happens there are tons of ups and downs. It's a journey of discovery--there are moments on mountaintops and moments in deep valleys of despair and anguish. Live life to the fullest, and focus on the positive.",
"I want to define success by redefining it. For me it is not that solely mythical definition–glamour, allure, enticement, power of wealth, and the privilege from care. It's about shaping my own destiny. Success is doing ordinary things extraordinarily well.",
"Success means doing the best we can with what we have. Success is a personal standard, reaching for the highest that is in us, becoming all that we can be. Success means having the courage, and the will to become the person you believe you were meant to be.",
"Take up one idea. Make that one idea your life--think of it, dream of it, live on that idea. Let the brain and every part of your body, be full of that idea, and just leave every other idea alone. The function of leadership is to produce more leaders, not more followers.",
"People who succeed have momentum. The more they succeed, the more they want to succeed, and the more they find a way to succeed. Similarly, when someone is failing, the tendency is to get on a downward spiral that can even become a self-fulfilling prophecy."
}
;
//2D array of 20 sentences, each having 20 words approx
char sentences_20[20][200]={"Kinematics is the study of the motion of points mass, objects, and groups of objects without considering the causes of its motion and final destination.",
"Kinematics is the branch of mechanics that describes the motion of objects and systems of groups of objects, without reference to the causes of motion.",
"Friction is a force between two surfaces that are sliding across each other. When you try to push a book on table, friction makes this difficult.",
"Inertia is the resistance of any physical object to any change in its velocity. This includes changes to the object's speed, or direction of motion.",
"Alternating current is an electric current which periodically reverses direction, in contrast to direct current which flows only in one direction.",
"Alternating current is an electric current which periodically reverses direction, in contrast to direct current which flows only in one direction.",
"Direct current is the unidirectional flow of an electric charge. An electrochemical cell is a prime example of direct current power source.",
"Reflection is the change in direction of a wavefront at an interface between two different media so that the wavefront returns back.",
"Refraction is defined as the change in direction of a waveform passing from one medium to another or from a gradual change in the medium.",
"Defraction is the bending of waves around the corners of an obstacle or through an aperture into the region of geometrical shadow of the obstacle.",
"Electromagnetic waves or EM waves are waves that are created as a result of vibrations between an electric field and a magnetic field.",
"Thermodynamics is the branch of practical physics that deals with the relationships between heat and other forms of energy and medium.",
"Electromagnetism is a branch of physics which deals with the electromagnetic force that occurs between electrically charged particles and matter.",
"Electrostatics is the study of electromagnetism that occur when there are no moving charges after a static equilibrium has been established.",
"In physics, circular motion is a movement of an object along the circumference of a circle or performing rotation along a circular path.",
"A force is a push or pull action upon an object resulting from the object's interaction with another object. Gravitation is also a force.",
"Diffusion is defined as the movement of a substance from an area of high concentration to an area of low concentration till it reaches equilibrium.",
"Dynamics is the branch of classical mechanics or classic physics which is concerned with the study of forces and their effects on motion.",
"A rotation is a movement or transformation that turns a figure or an object about a fixed point called the center of rotation along an axis.",
"The center of mass of a distribution of mass in space is the unique point where the relative position of the distributed mass sums to zero.",
"Self inductance is defined as the induction of a voltage in a current carrying wire when the current in the wire itself is not constant."
};
//2D array of 20 sentences, each having 35 words approx
char sentences_35[20][400]={"A Graph is a non-linear data structure consisting of nodes and edges. The nodes are sometimes also referred to as vertices and the edges are lines or arcs that connect any two nodes in the graph.",
"Graphs are used to solve a lot of real-life problems. Graphs are used to represent networks. The networks may include paths in a city or telephone network or circuit network. Graphs are also used by Facebook",
"A linked list is represented by a pointer to the first node of the linked list. The first node is called the head. If the linked list is empty, then the value of the head is NULL. Size can be increased easiy in linked list",
"The new node is always added before the head of the given Linked List. And newly added node becomes the new head of the Linked List. Time complexity of push function is constant. having constant time complexity is best",
"Circular linked list is a linked list where all nodes are connected to form a circle. There is no NULL at the end. A circular linked list can be a singly circular linked list or doubly circular linked list.",
"A Doubly Linked List contains an extra pointer, typically called previous pointer, together with next pointer and data which are there in singly linked list.A DLL can be traversed in both forward and backward direction.",
"Binary Tree is A tree whose elements have at most 2 children is called a binary tree. Since each element in a binary tree can have only 2 children, we typically name them the left and right child.",
"Red-Black Tree is a self-balancing Binary Search Tree (BST) where every node has a color either red or black. Root of tree is always black.There are no two adjacent red nodes. A red node cannot have a red parent or red child.",
"The AVL trees are more balanced compared to Red-Black Trees, but they may cause more rotations during insertion and deletion. If it involves many frequent insertions and deletions, then Red Black trees should be preferred.",
"The m-way search trees are multi-way trees which are generalised versions of binary trees where each node contains multiple elements. In an m-Way tree of order m, each node contains a maximum of m-1 elements and m children.",
"Hashing is an important Data Structure which is designed to use a special function called the Hash function which is used to map a given value with a particular key for faster and accurate access of elements.",
"Time complexity of an algorithm is the amount of time taken by an algorithm to run. Similarly, Space complexity of an algorithm quantifies the amount of space or memory taken by an algorithm to run as a function of the length of the input.",
"Stack is a linear data structure which follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out). There are many real-life examples of a stack.",
"A Queue is a linear structure which follows a particular order in which the operations are performed. The order is First In First Out (FIFO). A good example is any queue of consumers where the consumer that came first is served first.",
"Circular Queue is a linear data structure in which the operations are performed based on FIFO (First In First Out) principle and the last position is connected back to the first position to make a circle. It is also called Ring buffer.",
"An array is collection of items stored at contiguous memory locations. The idea is to store multiple items of same type together. This makes it easier to calculate the position of each element by simply adding an offset to a base value.",
"In C we can define multidimensional arrays, in simple words we can cal it array of arrays. Data in multidimensional arrays are stored in tabular form (in row major order) or column major. We have also used 2D arrays to store sentences",
"A structure is a user defined data type in C. A structure creates a data type that can be used to group items of possibly different types into a single type, struct keyword is used to create a structure.",
"A Sorting Algorithm is used to rearrange a given array or list elements according to a comparison operator on the elements. The comparison operator is used to decide the new order of element in the respective data structure.",
"ShellSort is mainly a variation of Insertion Sort. In insertion sort, we move elements only one position ahead. When an element has to be moved far ahead, many movements are involved. The idea of shellSort is to allow exchange of far items."
};
float time_taken_global=0.0;
bool memory_test_status=0, typing_test_status=0;
//defining data structure of linked list for linked_list() function
typedef struct node {
    char data[15];//each word will contain max 15 letters
    struct node * next;
}
node;

void wink_with_mask()
{
  yellow_screen();
    clear_screen();
   printf("\n");
printf("  ________      ______        ______      ______      _____    __   __   _____\n");
printf(" {  ____  |    / ____ \\      / ____ \\    |  ___ \\    |  _  \\   \\ \\ / /  | ____|\n");
printf(" | |    |_|   / /    \\ \\    / /    \\ \\   | |   \\ \\   | |_|  |   \\ / /   ||__\n");
printf(" | |  ____   | |      | |  | |      | |  | |    | |  |  _  <     | |    | __|\n");
printf(" | |_|__| |   \\ \\____/ /    \\ \\____/ /   | |___/ /   | |_|  |    | |    ||____\n");
printf(" {________|    \\______/      \\______/    |______/    |_____/     |_|    |_____|\n\n");
    printf("\t          ^^^^^^^^^^^^^^^                    \n");
    printf("\t         *               *                   \n");
    printf("\t        *                 *                  \n");
    printf("\t       |     ~~~   ~~~     |                 \n");
    printf("\t      (|      O     O      |)                \n");
    printf("\t       |   _____{ }_____   |                 \n");
    printf("\t       |--|  stay safe  |--|                 \n");
    printf("\t       |  |  wear mask  |  |                 \n");
    printf("\t       (--(_____________)--)                 \n");
    printf("\t        (_________________)                  \n");
    printf("\t                                         \n");
    delay(100);
    clear_screen();
printf("\n");
printf("  ________      ______        ______      ______      _____    __   __   _____\n");
printf(" {  ____  |    / ____ \\      / ____ \\    |  ___ \\    |  _  \\   \\ \\ / /  | ____|\n");
printf(" | |    |_|   / /    \\ \\    / /    \\ \\   | |   \\ \\   | |_|  |   \\ / /   ||__\n");
printf(" | |  ____   | |      | |  | |      | |  | |    | |  |  _  <     | |    | __|\n");
printf(" | |_|__| |   \\ \\____/ /    \\ \\____/ /   | |___/ /   | |_|  |    | |    ||____\n");
printf(" {________|    \\______/      \\______/    |______/    |_____/     |_|    |_____|\n\n");
    printf("\t          ^^^^^^^^^^^^^^^                    \n");
    printf("\t         *               *                   \n");
    printf("\t        *                 *                  \n");
    printf("\t       |     ~~~   ~^^     |                 \n");
    printf("\t      (|      O     O      |)                \n");
    printf("\t       |   _____{ }_____   |                 \n");
    printf("\t       |--|  stay safe  |--|                 \n");
    printf("\t       |  |  wear mask  |  |                 \n");
    printf("\t       (--(_____________)--)                 \n");
    printf("\t        (_________________)                  \n");
    printf("\t                                         \n");
    delay(100);
    clear_screen();
   printf("\n");
printf("  ________      ______        ______      ______      _____    __   __   _____\n");
printf(" {  ____  |    / ____ \\      / ____ \\    |  ___ \\    |  _  \\   \\ \\ / /  | ____|\n");
printf(" | |    |_|   / /    \\ \\    / /    \\ \\   | |   \\ \\   | |_|  |   \\ / /   ||__\n");
printf(" | |  ____   | |      | |  | |      | |  | |    | |  |  _  <     | |    | __|\n");
printf(" | |_|__| |   \\ \\____/ /    \\ \\____/ /   | |___/ /   | |_|  |    | |    ||____\n");
printf(" {________|    \\______/      \\______/    |______/    |_____/     |_|    |_____|\n\n");
    printf("\t          ^^^^^^^^^^^^^^^                    \n");
    printf("\t         *               *                   \n");
    printf("\t        *                 *                  \n");
    printf("\t       |     ~~~   ~~~     |                 \n");
    printf("\t      (|      O     O      |)                \n");
    printf("\t       |   _____{ }_____   |                 \n");
    printf("\t       |--|  stay safe  |--|                 \n");
    printf("\t       |  |  wear mask  |  |                 \n");
    printf("\t       (--(_____________)--)                 \n");
    printf("\t        (_________________)                  \n");
    printf("\t                                         \n");
    delay(100);
    clear_screen();
   printf("\n");
printf("  ________      ______        ______      ______      _____    __   __   _____\n");
printf(" {  ____  |    / ____ \\      / ____ \\    |  ___ \\    |  _  \\   \\ \\ / /  | ____|\n");
printf(" | |    |_|   / /    \\ \\    / /    \\ \\   | |   \\ \\   | |_|  |   \\ / /   ||__\n");
printf(" | |  ____   | |      | |  | |      | |  | |    | |  |  _  <     | |    | __|\n");
printf(" | |_|__| |   \\ \\____/ /    \\ \\____/ /   | |___/ /   | |_|  |    | |    ||____\n");
printf(" {________|    \\______/      \\______/    |______/    |_____/     |_|    |_____|\n\n");
    printf("\t          ^^^^^^^^^^^^^^^                    \n");
    printf("\t         *               *                   \n");
    printf("\t        *                 *                  \n");
    printf("\t       |     ~~~   ~^^     |                 \n");
    printf("\t      (|      O     O      |)                \n");
    printf("\t       |   _____{ }_____   |                 \n");
    printf("\t       |--|  stay safe  |--|                 \n");
    printf("\t       |  |  wear mask  |  |                 \n");
    printf("\t       (--(_____________)--)                 \n");
    printf("\t        (_________________)                  \n");
    printf("\t                                         \n");
    delay(100);
    clear_screen();
 printf("\n");
printf("  ________      ______        ______      ______      _____    __   __   _____\n");
printf(" {  ____  |    / ____ \\      / ____ \\    |  ___ \\    |  _  \\   \\ \\ / /  | ____|\n");
printf(" | |    |_|   / /    \\ \\    / /    \\ \\   | |   \\ \\   | |_|  |   \\ / /   ||__\n");
printf(" | |  ____   | |      | |  | |      | |  | |    | |  |  _  <     | |    | __|\n");
printf(" | |_|__| |   \\ \\____/ /    \\ \\____/ /   | |___/ /   | |_|  |    | |    ||____\n");
printf(" {________|    \\______/      \\______/    |______/    |_____/     |_|    |_____|\n\n");
    printf("\t          ^^^^^^^^^^^^^^^                    \n");
    printf("\t         *               *                   \n");
    printf("\t        *                 *                  \n");
    printf("\t       |     ~~~   ~~~     |                 \n");
    printf("\t      (|      O     O      |)                \n");
    printf("\t       |   _____{ }_____   |                 \n");
    printf("\t       |--|  stay safe  |--|                 \n");
    printf("\t       |  |  wear mask  |  |                 \n");
    printf("\t       (--(_____________)--)                 \n");
    printf("\t        (_________________)                  \n");
    printf("\t                                         \n");
    delay(100);
    clear_screen();

  printf("\n");
printf("  ________      ______        ______      ______      _____    __   __   _____\n");
printf(" {  ____  |    / ____ \\      / ____ \\    |  ___ \\    |  _  \\   \\ \\ / /  | ____|\n");
printf(" | |    |_|   / /    \\ \\    / /    \\ \\   | |   \\ \\   | |_|  |   \\ / /   ||__\n");
printf(" | |  ____   | |      | |  | |      | |  | |    | |  |  _  <     | |    | __|\n");
printf(" | |_|__| |   \\ \\____/ /    \\ \\____/ /   | |___/ /   | |_|  |    | |    ||____\n");
printf(" {________|    \\______/      \\______/    |______/    |_____/     |_|    |_____|\n\n");
    printf("\t          ^^^^^^^^^^^^^^^                    \n");
    printf("\t         *               *                   \n");
    printf("\t        *                 *                  \n");
    printf("\t       |     ~~~   ~~~     |                 \n");
    printf("\t      (|      O     O      |)                \n");
    printf("\t       |   _____{ }_____   |                 \n");
    printf("\t       |--|  stay safe  |--|                 \n");
    printf("\t       |  |  wear mask  |  |                 \n");
    printf("\t       (--(_____________)--)                 \n");
    printf("\t        (_________________)                  \n");
    printf("\t                                         \n");
    delay(100);
    clear_screen();
    printf("\n");
printf("  ________      ______        ______      ______      _____    __   __   _____\n");
printf(" {  ____  |    / ____ \\      / ____ \\    |  ___ \\    |  _  \\   \\ \\ / /  | ____|\n");
printf(" | |    |_|   / /    \\ \\    / /    \\ \\   | |   \\ \\   | |_|  |   \\ / /   ||__\n");
printf(" | |  ____   | |      | |  | |      | |  | |    | |  |  _  <     | |    | __|\n");
printf(" | |_|__| |   \\ \\____/ /    \\ \\____/ /   | |___/ /   | |_|  |    | |    ||____\n");
printf(" {________|    \\______/      \\______/    |______/    |_____/     |_|    |_____|\n\n");
    printf("\t          ^^^^^^^^^^^^^^^                    \n");
    printf("\t         *               *                   \n");
    printf("\t        *                 *                  \n");
    printf("\t       |     ~~~   ~~~     |                 \n");
    printf("\t      (|      -     O      |)                \n");
    printf("\t       |   _____{ }_____   |                 \n");
    printf("\t       |--|  stay safe  |--|                 \n");
    printf("\t       |  |  wear mask  |  |                 \n");
    printf("\t       (--(_____________)--)                 \n");
    printf("\t        (_________________)                  \n");
    printf("\t                                         \n");
    delay(100);
    clear_screen();
           printf("\n");
printf("  ________      ______        ______      ______      _____    __   __   _____\n");
printf(" {  ____  |    / ____ \\      / ____ \\    |  ___ \\    |  _  \\   \\ \\ / /  | ____|\n");
printf(" | |    |_|   / /    \\ \\    / /    \\ \\   | |   \\ \\   | |_|  |   \\ / /   ||__\n");
printf(" | |  ____   | |      | |  | |      | |  | |    | |  |  _  <     | |    | __|\n");
printf(" | |_|__| |   \\ \\____/ /    \\ \\____/ /   | |___/ /   | |_|  |    | |    ||____\n");
printf(" {________|    \\______/      \\______/    |______/    |_____/     |_|    |_____|\n\n");
    printf("\t          ^^^^^^^^^^^^^^^                    \n");
    printf("\t         *               *                   \n");
    printf("\t        *                 *                  \n");
    printf("\t       |     ~~~   ~~~     |                 \n");
    printf("\t      (|      O     O      |)                \n");
    printf("\t       |   _____{ }_____   |                 \n");
    printf("\t       |--|  stay safe  |--|                 \n");
    printf("\t       |  |  wear mask  |  |                 \n");
    printf("\t       (--(_____________)--)                 \n");
    printf("\t        (_________________)                  \n");
    printf("\t                                         \n");
    delay(100);
    clear_screen();
    printf("\n");
printf("  ________      ______        ______      ______      _____    __   __   _____\n");
printf(" {  ____  |    / ____ \\      / ____ \\    |  ___ \\    |  _  \\   \\ \\ / /  | ____|\n");
printf(" | |    |_|   / /    \\ \\    / /    \\ \\   | |   \\ \\   | |_|  |   \\ / /   ||__\n");
printf(" | |  ____   | |      | |  | |      | |  | |    | |  |  _  <     | |    | __|\n");
printf(" | |_|__| |   \\ \\____/ /    \\ \\____/ /   | |___/ /   | |_|  |    | |    ||____\n");
printf(" {________|    \\______/      \\______/    |______/    |_____/     |_|    |_____|\n\n");
    printf("\t          ^^^^^^^^^^^^^^^                    \n");
    printf("\t         *               *                   \n");
    printf("\t        *                 *                  \n");
    printf("\t       |     ~~~   ~~~     |                 \n");
    printf("\t      (|      O     O      |)                \n");
    printf("\t       |   _____{ }_____   |                 \n");
    printf("\t       |--|  stay safe  |--|                 \n");
    printf("\t       |  |  wear mask  |  |                 \n");
    printf("\t       (--(_____________)--)                 \n");
    printf("\t        (_________________)                  \n");
    printf("\t                                         \n");
    delay(100);
    clear_screen();

   printf("\n");
printf("  ________      ______        ______      ______      _____    __   __   _____\n");
printf(" {  ____  |    / ____ \\      / ____ \\    |  ___ \\    |  _  \\   \\ \\ / /  | ____|\n");
printf(" | |    |_|   / /    \\ \\    / /    \\ \\   | |   \\ \\   | |_|  |   \\ / /   ||__\n");
printf(" | |  ____   | |      | |  | |      | |  | |    | |  |  _  <     | |    | __|\n");
printf(" | |_|__| |   \\ \\____/ /    \\ \\____/ /   | |___/ /   | |_|  |    | |    ||____\n");
printf(" {________|    \\______/      \\______/    |______/    |_____/     |_|    |_____|\n\n");
    printf("\t          ^^^^^^^^^^^^^^^                    \n");
    printf("\t         *               *                   \n");
    printf("\t        *                 *                  \n");
    printf("\t       |     ~~~   ~^^     |                 \n");
    printf("\t      (|      O     O      |)                \n");
    printf("\t       |   _____{ }_____   |                 \n");
    printf("\t       |--|  stay safe  |--|                 \n");
    printf("\t       |  |  wear mask  |  |                 \n");
    printf("\t       (--(_____________)--)                 \n");
    printf("\t        (_________________)                  \n");
    printf("\t                                         \n");
    delay(100);
    clear_screen();
   printf("\n");
printf("  ________      ______        ______      ______      _____    __   __   _____\n");
printf(" {  ____  |    / ____ \\      / ____ \\    |  ___ \\    |  _  \\   \\ \\ / /  | ____|\n");
printf(" | |    |_|   / /    \\ \\    / /    \\ \\   | |   \\ \\   | |_|  |   \\ / /   ||__\n");
printf(" | |  ____   | |      | |  | |      | |  | |    | |  |  _  <     | |    | __|\n");
printf(" | |_|__| |   \\ \\____/ /    \\ \\____/ /   | |___/ /   | |_|  |    | |    ||____\n");
printf(" {________|    \\______/      \\______/    |______/    |_____/     |_|    |_____|\n\n");
    printf("\t          ^^^^^^^^^^^^^^^                    \n");
    printf("\t         *               *                   \n");
    printf("\t        *                 *                  \n");
    printf("\t       |     ~~~   ~~~     |                 \n");
    printf("\t      (|      O     O      |)                \n");
    printf("\t       |   _____{ }_____   |                 \n");
    printf("\t       |--|  stay safe  |--|                 \n");
    printf("\t       |  |  wear mask  |  |                 \n");
    printf("\t       (--(_____________)--)                 \n");
    printf("\t        (_________________)                  \n");
    printf("\t                                         \n");
    delay(100);
    clear_screen();
     printf("\n");
printf("  ________      ______        ______      ______      _____    __   __   _____\n");
printf(" {  ____  |    / ____ \\      / ____ \\    |  ___ \\    |  _  \\   \\ \\ / /  | ____|\n");
printf(" | |    |_|   / /    \\ \\    / /    \\ \\   | |   \\ \\   | |_|  |   \\ / /   ||__\n");
printf(" | |  ____   | |      | |  | |      | |  | |    | |  |  _  <     | |    | __|\n");
printf(" | |_|__| |   \\ \\____/ /    \\ \\____/ /   | |___/ /   | |_|  |    | |    ||____\n");
printf(" {________|    \\______/      \\______/    |______/    |_____/     |_|    |_____|\n\n");
    printf("\t          ^^^^^^^^^^^^^^^                    \n");
    printf("\t         *               *                   \n");
    printf("\t        *                 *                  \n");
    printf("\t       |     ~~~   ~^^     |                 \n");
    printf("\t      (|      O     O      |)                \n");
    printf("\t       |   _____{ }_____   |                 \n");
    printf("\t       |--|  stay safe  |--|                 \n");
    printf("\t       |  |  wear mask  |  |                 \n");
    printf("\t       (--(_____________)--)                 \n");
    printf("\t        (_________________)                  \n");
    printf("\t                                         \n");
    delay(100);
    clear_screen();
     printf("\n");
printf("  ________      ______        ______      ______      _____    __   __   _____\n");
printf(" {  ____  |    / ____ \\      / ____ \\    |  ___ \\    |  _  \\   \\ \\ / /  | ____|\n");
printf(" | |    |_|   / /    \\ \\    / /    \\ \\   | |   \\ \\   | |_|  |   \\ / /   ||__\n");
printf(" | |  ____   | |      | |  | |      | |  | |    | |  |  _  <     | |    | __|\n");
printf(" | |_|__| |   \\ \\____/ /    \\ \\____/ /   | |___/ /   | |_|  |    | |    ||____\n");
printf(" {________|    \\______/      \\______/    |______/    |_____/     |_|    |_____|\n\n");
    printf("\t          ^^^^^^^^^^^^^^^                    \n");
    printf("\t         *               *                   \n");
    printf("\t        *                 *                  \n");
    printf("\t       |     ~~~   ~~~     |                 \n");
    printf("\t      (|      O     O      |)                \n");
    printf("\t       |   _____{ }_____   |                 \n");
    printf("\t       |--|  stay safe  |--|                 \n");
    printf("\t       |  |  wear mask  |  |                 \n");
    printf("\t       (--(_____________)--)                 \n");
    printf("\t        (_________________)                  \n");
    printf("\t                                         \n");
    delay(100);
    clear_screen();
       printf("\n");
printf("  ________      ______        ______      ______      _____    __   __   _____\n");
printf(" {  ____  |    / ____ \\      / ____ \\    |  ___ \\    |  _  \\   \\ \\ / /  | ____|\n");
printf(" | |    |_|   / /    \\ \\    / /    \\ \\   | |   \\ \\   | |_|  |   \\ / /   ||__\n");
printf(" | |  ____   | |      | |  | |      | |  | |    | |  |  _  <     | |    | __|\n");
printf(" | |_|__| |   \\ \\____/ /    \\ \\____/ /   | |___/ /   | |_|  |    | |    ||____\n");
printf(" {________|    \\______/      \\______/    |______/    |_____/     |_|    |_____|\n\n");
    printf("\t          ^^^^^^^^^^^^^^^                    \n");
    printf("\t         *               *                   \n");
    printf("\t        *                 *                  \n");
    printf("\t       |     ~~~   ~~~     |                 \n");
    printf("\t      (|      O     O      |)                \n");
    printf("\t       |   _____{ }_____   |                 \n");
    printf("\t       |--|  stay safe  |--|                 \n");
    printf("\t       |  |  wear mask  |  |                 \n");
    printf("\t       (--(_____________)--)                 \n");
    printf("\t        (_________________)                  \n");
    printf("\t                                         \n");
    delay(100);
    clear_screen();
        printf("\n");
printf("  ________      ______        ______      ______      _____    __   __   _____\n");
printf(" {  ____  |    / ____ \\      / ____ \\    |  ___ \\    |  _  \\   \\ \\ / /  | ____|\n");
printf(" | |    |_|   / /    \\ \\    / /    \\ \\   | |   \\ \\   | |_|  |   \\ / /   ||__\n");
printf(" | |  ____   | |      | |  | |      | |  | |    | |  |  _  <     | |    | __|\n");
printf(" | |_|__| |   \\ \\____/ /    \\ \\____/ /   | |___/ /   | |_|  |    | |    ||____\n");
printf(" {________|    \\______/      \\______/    |______/    |_____/     |_|    |_____|\n\n");
    printf("\t          ^^^^^^^^^^^^^^^                    \n");
    printf("\t         *               *                   \n");
    printf("\t        *                 *                  \n");
    printf("\t       |     ~~~   ~~~     |                 \n");
    printf("\t      (|      -     O      |)                \n");
    printf("\t       |   _____{ }_____   |                 \n");
    printf("\t       |--|  stay safe  |--|                 \n");
    printf("\t       |  |  wear mask  |  |                 \n");
    printf("\t       (--(_____________)--)                 \n");
    printf("\t        (_________________)                  \n");
    printf("\t                                         \n");
    delay(100);
    clear_screen();
           printf("\n");
printf("  ________      ______        ______      ______      _____    __   __   _____\n");
printf(" {  ____  |    / ____ \\      / ____ \\    |  ___ \\    |  _  \\   \\ \\ / /  | ____|\n");
printf(" | |    |_|   / /    \\ \\    / /    \\ \\   | |   \\ \\   | |_|  |   \\ / /   ||__\n");
printf(" | |  ____   | |      | |  | |      | |  | |    | |  |  _  <     | |    | __|\n");
printf(" | |_|__| |   \\ \\____/ /    \\ \\____/ /   | |___/ /   | |_|  |    | |    ||____\n");
printf(" {________|    \\______/      \\______/    |______/    |_____/     |_|    |_____|\n\n");
    printf("\t          ^^^^^^^^^^^^^^^                    \n");
    printf("\t         *               *                   \n");
    printf("\t        *                 *                  \n");
    printf("\t       |     ~~~   ~~~     |                 \n");
    printf("\t      (|      O     O      |)                \n");
    printf("\t       |   _____{ }_____   |                 \n");
    printf("\t       |--|  stay safe  |--|                 \n");
    printf("\t       |  |  wear mask  |  |                 \n");
    printf("\t       (--(_____________)--)                 \n");
    printf("\t        (_________________)                  \n");
    printf("\t                                         \n");
    delay(100);


}


void printtypingtest()
{
    printf("   _______   __   __   ____     _    ___     _     ________        _______    _____    _______    _______    \n");
    printf("  |_______|  \\ \\ / /  |    \\   | |  |   \\   | |   {  ____  |      |_______|  | ____|  /  _____)  |_______|\n");
    printf("     | |      \\ / /   |  __/   | |  | |\\ \\  | |   | |    |_|         | |     ||__    \( (____        | |\n");
    printf("     | |       | |    | |      | |  | | \\ \\ | |   | |  ____   ===    | |     | __|    \\____  \\      | |\n");
    printf("     | |       | |    | |      | |  | |  \\ \\| |   | | |__| |         | |     ||____    ____)  \)     | | \n");
    printf("     |_|       |_|    |_|      |_|  |_|   \\___|   {________|         |_|     |_____|  (______/      |_| \n\n\n");


}

void printmemorytest()
{
    printf("  ___      ___    _____    ___      ___      ________      _____   __   __      _______    _____    _______    _______ \n");
    printf(" |   \\    /   |  | ____|  |   \\    /   |    / ______ \\    |  __ \\  \\ \\ / /     |_______|  | ____|  /  _____)  |_______|\n");
    printf(" | |\\ \\  / /| |  ||__     | |\\ \\  / /| |   / /      \\ \\   | |__| |  \\ / /         | |     ||__    \(  (____       | |\n");
    printf(" | | \\ \\/ / | |  | __|    | | \\ \\/ / | |  | |        | |  |  ___/    | |   ===    | |     | __|    \\____  \\      | |\n");
    printf(" | |  \\__/  | |  ||____   | |  \\__/  | |   \\ \\______/ /   | |\\ \\     | |          | |     ||____    ____)  \)     | |\n");
    printf(" |_|        |_|  |_____|  |_|        |_|    \\________/    |_| \\_\\    |_|          |_|     |_____|  (______/      |_| \n\n\n");

}


void printgoodbye()
{
    printf("                                                      _____   ___    __\n");
    printf("  ________      ______        ______      ______     |  __ \\  \\  \\  / /  _____ \n");
    printf(" {  ____  |    / ____ \\      / ____ \\    |  ___ \\    | |__} |  \\  \\/ /  | ____|\n");
    printf(" | |    |_|   / /    \\ \\    / /    \\ \\   | |   \\ \\   |  ___/    \\   /   ||__\n");
    printf(" | |  ____   | |      | |  | |      | |  | |    | |  |  __ \\     | |    | __|\n");
    printf(" | | |__| |   \\ \\____/ /    \\ \\____/ /   | |___/ /   | |__} |    | |    ||____\n");
    printf(" {________|    \\______/      \\______/    |______/    |_____/     |_|    |_____|\n\n");

}

void printwelcome()
{
    printf("  _          _    _____    _           ______       ______      ___       ___    _____ \n");
    printf(" | |   __   | |  | ____|  | |         / ____ \\     / ____ \\    |   \\     /   |  | ____|\n");
    printf(" | |  /  \\  | |  ||__     | |        / /    \\_\\   / /    \\ \\   | |\\ \\   / /| |  ||__\n");
    printf(" | | / /\\ \\ | |  | __|    | |       | |      _    | |    | |   | | \\ \\ / / | |  | __|\n");
    printf(" | |/ /  \\ \\| |  ||____   | |_____   \\ \\____/ /   \\ \\____/ /   | |  \\___/  | |  ||____\n");
    printf(" |___/    \\___|  |_____|  |_______|   \\______/     \\______/    |_|         |_|  |_____|\n\n");
}
/*
>>>asks for yes or no input
>>>returns 1 if "YES" is selected
>>>only verifies first letter of input
>>>asks user to give valid input if input doesn't start with 'y','Y','n','N'
>>>asks user to gave valid input if more than 4 characters are input,user can even enter nope
*/
int yes_or_no() {

    while (1) {
        char ans;
        printf("\nEnter YES\n   OR\nEnter NO\n");

        gets(&ans);//asks for string input, used gets() as to avoid any error if user inputs multiple space separated words
        int length = strlen(&ans);
        if ((ans == 121 || ans == 89) && length < 4) {
            clear_screen();
            return 1;
        } else if ((ans == 110 || ans == 78) && length < 4) {//calls ending print functions
            return 0;
        } else
            printf("\nPlease enter a valid input");
    }
}

void clrscr()  //FUNCTION TO CLEAR THE SCREEN
{
    system("cls");
}


void middle1()  //FUNCTION TO ALIGN CURSOR USING '\n'
{
        printf("\n\n\n\n\n\n");
}


void middle2()  //FUNCTION TO ALIGN CURSOR USING '\t'
{
    printf("\t\t\t\t");
}

void loading() //Function to display Countdown Screen
{
    clrscr();
    middle1();
    middle2();
    printf("STARTING IN ");
    delay(800);
    printf("3 ");
    delay(800);
    printf("2 ");
    delay(800);
    printf("1 ");
    delay(50);
    clear_screen();
}

int memory_test1() //Memory Test Level 1 Function Block
{
    //Initializing a database of 20 words as 2-D array
    char a[20][10]={"person","tent","stream","rail","thrill","children","letter","ghost","dress","agreement","another","father","thought","school","number","study","country","place","watch","together"};
    char b[20][20]={"\0"},d[5][10],e[5][10]={"\0"};
    int i,j,c=0,q=0,k=0,w=0; //loop control variables and check variables
    clear_screen();
    printf("Press Enter key when you are Ready to start a Countdown\nafter which five words will be displayed on the screen for 1 second each\n\n\tTry to Remember them!!\n");
    getchar();
    loading();
    srand(time(0));
    for(i=(rand()%4);i<20;i=i+1+(rand()%4)) //Selecting and Displaying random 5 words and copying in a different 2-D array
    {
        middle1();
        middle2();
        puts(a[i]);
        strcpy(d[k],a[i]);
        k++;
        delay(1000);
        clear_screen();
        c++;
        if(c==5)
            break;
    }
    printf("Now Input the Words you Remember:\nInstructions:\n\t1.Click Enter after typing every word\n\t2.Enter 'Done' to stop typing\n\t3.Do not Enter Duplicate Words\n\n");
    for(i=0;i<20;i++) //Taking input in a 2-D array and checking for duplicates
    {
        gets(b[i]);
        if(!strcmpi("Done",b[i]))
            break;
        for(j=0;j<i;j++)
        {
            if(!strcmp(b[i],b[j]))
            {
                printf("Duplicate Word Entered. Please Enter Again\n");
                gets(b[i]);
            }
        }
        if(!strcmpi("Done",b[i]))
            break;
    }
    for(i=0;i<5;i++) //Comparing input words and displayed words
    {
         w=0;
         for(j=0;j<5;j++)
         {
              if(!strcmp(d[i],b[j]))
                    q++;
              else
                    w++;
         }
         if(w==5)               //Copying missed words in a separate 2-D Array
             strcpy(e[i],d[i]);
     }
     clear_screen();
     printf("\n\nYou got %d words right!!\n\n",q); //Printing Results
     printf("Words Displayed:\n");
     for(i=0;i<5;i++)
        puts(d[i]);
     printf("\n\nYour Input:\n");
     for(i=0;i<20;i++)
     {
         if(!strcmpi("Done",b[i]))
               break;
         puts(b[i]);
     }
     if(q<5)
     {
          printf("\n\nYou Missed:\n");
          for(int i=0;i<5;i++)
          {
              if(strcmpi(e[i],'\0'))
                   printf("%s ",e[i]);
          }
          printf("\n\nRESULT:\n\tYou failed the Memory Test\n");
          return 0;
     }
     else
     {
         printf("\n\nRESULT:\n\tYou passed Memory Test Successfully\n");
         return 1;
     }
}

int memory_test3() //Memory Test Level 3 Function Block
{
    //Initializing a database of 20 words as 2-D array
    char a[20][10]={"person","tent","stream","rail","thrill","children","letter","ghost","dress","agreement","another","father","thought","school","number","study","country","place","watch","together"};
    char b[20][20]={"\0"},d[10][10],e[10][10]={"\0"};
    int i,j,c=0,q=0,k=0,w=0; //loop control variables and check variables
    clear_screen();
    printf("Press Enter key when you are Ready to start a Countdown\nafter which five words will be displayed on the screen for 1 second each\n\n\tTry to Remember them!!\n");
    getchar();
    loading();
    srand(time(0));
    for(i=(rand()%2);i<20;i=i+1+(rand()%2)) //Selecting and Displaying random 10 words and copying in a different 2-D array
    {
        middle1();
        middle2();
        puts(a[i]);
        strcpy(d[k],a[i]);
        k++;
        delay(1000);
        clear_screen();
        c++;
        if(c==10)
            break;
    }
    printf("Now Input the Words you Remember:\nInstructions:\n\t1.Click Enter after typing every word\n\t2.Enter 'Done' to stop typing\n\t3.Do not Enter Duplicate Words\n\n");
    for(i=0;i<20;i++) //Taking input in a 2-D array and checking for duplicates
    {
        gets(b[i]);
        if(!strcmpi("Done",b[i]))
            break;
        for(j=0;j<i;j++)
        {
            if(!strcmp(b[i],b[j]))
            {
                printf("Duplicate Word Entered. Please Enter Again\n");
                gets(b[i]);
            }
        }
        if(!strcmpi("Done",b[i]))
            break;
    }
    for(i=0;i<10;i++) //Comparing input words and displayed words
    {
         w=0;
         for(j=0;j<10;j++)
         {
              if(!strcmp(d[i],b[j]))
                    q++;
              else
                    w++;
         }
         if(w==10)               //Copying missed words in a separate 2-D Array
             strcpy(e[i],d[i]);
     }
     clear_screen();
     printf("\n\nYou got %d words right!!\n\n",q); //Printing Results
     printf("Words Displayed:\n");
     for(i=0;i<10;i++)
        puts(d[i]);
     printf("\n\nYour Input:\n");
     for(i=0;i<20;i++)
     {
         if(!strcmpi("Done",b[i]))
               break;
         puts(b[i]);
     }
     if(q<10)
     {
          printf("\n\nYou Missed:\n");
          for(int i=0;i<10;i++)
          {
             if(strcmpi(e[i],'\0'))
                   printf("%s ",e[i]);
          }
          printf("\n\nRESULT:\n\tYou failed the Memory Test\n");
          return 0;
     }
     else
     {
         printf("\n\nRESULT:\n\tYou passed Memory Test Successfully\n");
         return 1;
     }
}

int memory_test2() //Memory Test Level 2 Function Block
{
    //Initializing a database of 20 words as 2-D array
    char a[20][10]={"person","tent","stream","rail","thrill","children","letter","ghost","dress","agreement","another","father","thought","school","number","study","country","place","watch","together"};
    char b[20][20]={"\0"},d[7][10],e[7][10]={"\0"};
    int i,j,c=0,q=0,k=0,w=0; //loop control variables and check variables
    clear_screen();
    printf("Press Enter key when you are Ready to start a Countdown\nafter which five words will be displayed on the screen for 1 second each\n\n\tTry to Remember them!!\n");
    getchar();
    loading();
    srand(time(0));
    for(i=(rand()%3);i<20;i=i+1+(rand()%3)) //Selecting and Displaying random 7 words and copying in a different 2-D array
    {
        middle1();
        middle2();
        puts(a[i]);
        strcpy(d[k],a[i]);
        k++;
        delay(1000);
        clear_screen();
        c++;
        if(c==7)
            break;
    }
    printf("Now Input the Words you Remember:\nInstructions:\n\t1.Click Enter after typing every word\n\t2.Enter 'Done' to stop typing\n\t3.Do not Enter Duplicate Words\n\n");
    for(i=0;i<20;i++) //Taking input in a 2-D array and checking for duplicates
    {
        gets(b[i]);
        if(!strcmpi("Done",b[i]))
            break;
        for(j=0;j<i;j++)
        {
            if(!strcmp(b[i],b[j]))
            {
                printf("Duplicate Word Entered. Please Enter Again\n");
                gets(b[i]);
            }
        }
        if(!strcmpi("Done",b[i]))
            break;
    }
    for(i=0;i<7;i++) //Comparing input words and displayed words
    {
         w=0;
         for(j=0;j<7;j++)
         {
              if(!strcmp(d[i],b[j]))
                    q++;
              else
                    w++;
         }
         if(w==7)               //Copying missed words in a separate 2-D Array
             strcpy(e[i],d[i]);
     }
     clear_screen();
     printf("\n\nYou got %d words right!!\n\n",q); //Printing Results
     printf("Words Displayed:\n");
     for(i=0;i<7;i++)
        puts(d[i]);
     printf("\n\nYour Input:\n");
     for(i=0;i<20;i++)
     {
         if(!strcmpi("Done",b[i]))
               break;
         puts(b[i]);
     }
     if(q<7)
     {
          printf("\n\nYou Missed:\n");
          for(int i=0;i<7;i++)
          {
              if(strcmpi(e[i],'\0'))
                   printf("%s ",e[i]);
          }
          printf("\n\nRESULT:\n\tYou failed the Memory Test\n");
          return 0;
     }
     else
     {
         printf("\n\nRESULT:\n\tYou passed Memory Test Successfully\n");
         return 1;
     }
}

void memory_test_menu()
{
    aqua_screen();
    clear_screen();
    printmemorytest();
    int c,s;
    printf("Choose your choice of Memory Test:\n\t1. 5 Words\n\t2. 7 Words\n\t3. 10 Words\n\n");
    s= input_number(3);
    getchar();
    if(s==1)
    {

        while(1)
        {
            int t=memory_test1();
            if(t!=1)
            {
                red_screen();
                printf("\n\nDo you want to Try Again?\n");
                c=yes_or_no();
                if(c==1)
                {
                    clear_screen();
                    memory_test_menu();
                }
                else if(c==0)
                {
                    aqua_screen();
                    memory_test_status=1;
                    if(typing_test_status==0)
                    {
                        clear_screen();
                        printf("\nWould you like to test your typing speed?\n");
                        int answer=yes_or_no();
                        if(answer==1)
                        {
                            clear_screen();
                            typing_test();
                        }
                        else
                            {
                                clear_screen();
                            wink_with_mask();
                            wink_with_mask();
                            wink_with_mask();
                            exit(0);
                            }

                    }
                    else if(typing_test_status==1);
                    {
                        clear_screen();
                        aqua_screen();
                        printf("You have taken both the tests\n\nPress Enter to see goodbye message\n");
                        getchar();
                        wink_with_mask();
                        wink_with_mask();
                        wink_with_mask();
                        exit(0);
                    }
                }
            }
            else if(t==1)
            {
                green_screen();
                printf("\nPress ENTER to see your congratulations message\n");
                getchar();
                printcongo();
                printcongo();
                printcongo();
                aqua_screen();
                memory_test_status=1;
                if(typing_test_status==0)
                {
                    clear_screen();
                    printf("\nNow would you like to test your typing skills?\n");
                    c=yes_or_no();
                    if(c==1)
                    {

                        clear_screen();
                        typing_test();
                    }
                    else
                    {
                        memory_test_status=1;
                        clear_screen();
                        wink_with_mask();
                        wink_with_mask();
                        wink_with_mask();
                        wink_with_mask();
                        exit(0);
                    }

                }
                else if(typing_test_status==1)
                {
                        clear_screen();
                        aqua_screen();
                        printf("You have taken both the tests\n\nPress Enter to see goodbye message");
                        getchar();
                        wink_with_mask();
                        wink_with_mask();
                        wink_with_mask();
                        exit(0);
                }

            }
        }

    }
    else if(s==2)
    {
        while(1)
            {
                int t=memory_test2();
                if(t!=1)
                {
                    red_screen();
                    printf("\n\nDo you want to Try Again?\n");
                    c=yes_or_no();
                    if(c==1)
                    {
                        clear_screen();
                        memory_test_menu();
                    }
                    else if(c==0)
                    {
                        aqua_screen();
                        memory_test_status=1;
                        if(typing_test_status==0)
                        {
                            clear_screen();
                            aqua_screen();
                            printf("\nWould you like to test your typing speed?\n");
                            int answer=yes_or_no();
                            if(answer==1)
                            {
                                clear_screen();
                                typing_test();
                            }
                            else
                            {
                                clear_screen();
                            wink_with_mask();
                            wink_with_mask();
                            wink_with_mask();
                            exit(0);
                            }
                        }
                        else if(typing_test_status==1);
                        {
                            clear_screen();
                            aqua_screen();
                            printf("You have taken both the tests\n\nPress Enter to see goodbye message");
                            getchar();
                            wink_with_mask();
                            wink_with_mask();
                            wink_with_mask();
                            exit(0);
                        }
                    }
                }
                else if(t==1)
                {
                    green_screen();
                    printf("\nPress ENTER to see your congratulations message\n");
                    getchar();
                    printcongo();
                    printcongo();
                    printcongo();
                    aqua_screen();
                    memory_test_status=1;
                    if(typing_test_status==0)
                    {
                        clear_screen();
                        aqua_screen();
                        printf("\nNow would you like to test your typing skills?\n");
                        c=yes_or_no();
                        if(c==1)
                        {
                            clear_screen();
                            typing_test();
                        }
                        else
                        {
                            memory_test_status=1;
                            clear_screen();
                            wink_with_mask();
                            wink_with_mask();
                            wink_with_mask();
                            wink_with_mask();
                            exit(0);
                        }

                    }
                    else if(typing_test_status==1)
                    {
                            clear_screen();
                            aqua_screen();
                            printf("You have taken both the tests\n\nPress Enter to see goodbye message");
                            getchar();
                            wink_with_mask();
                            wink_with_mask();
                            wink_with_mask();
                            exit(0);
                    }

                }
        }
    }
    else if(s==3)
    {
         while(1)
        {
            int t=memory_test3();
            if(t!=1)
            {
                red_screen();
                printf("\n\nDo you want to Try Again?\n");
                c=yes_or_no();
                if(c==1)
                {
                    clear_screen();
                    memory_test_menu();
                }
                else if(c==0)
                {
                    aqua_screen();
                    clear_screen();
                    memory_test_status=1;
                    if(typing_test_status==0)
                    {
                        clear_screen();
                        aqua_screen();
                        printf("\nWould you like to test your typing speed?\n");
                        int answer=yes_or_no();
                        if(answer==1)
                        {
                            clear_screen();
                            typing_test();
                        }
                        else
                            {
                                clear_screen();
                            wink_with_mask();
                            wink_with_mask();
                            wink_with_mask();
                            exit(0);
                            }
                    }
                    else if(typing_test_status==1);
                    {
                        clear_screen();
                        aqua_screen();
                        printf("You have taken both the tests\n\nPress Enter to see goodbye message");
                        getchar();
                        wink_with_mask();
                        wink_with_mask();
                        wink_with_mask();
                        exit(0);
                    }
                }
            }
            else if(t==1)
            {
                green_screen();
                printf("\nPress ENTER to see your congratulations message\n");
                getchar();
                printcongo();
                printcongo();
                printcongo();
                memory_test_status=1;
                aqua_screen();
                if(typing_test_status==0)
                {
                    clear_screen();
                    aqua_screen();
                    printf("\nNow would you like to test your typing skills?\n");
                    c=yes_or_no();

                    if(c==1)
                    {
                        clear_screen();
                        typing_test();
                    }
                    else
                    {
                        clear_screen();
                        memory_test_status=1;
                        clear_screen();
                        wink_with_mask();
                        wink_with_mask();
                        wink_with_mask();
                        wink_with_mask();
                        exit(0);
                    }

                }
                else if(typing_test_status==1)
                {
                        clear_screen();
                        aqua_screen();
                        printf("You have taken both the tests\n\nPress Enter to see goodbye message");
                        getchar();
                        wink_with_mask();
                        wink_with_mask();
                        wink_with_mask();
                        exit(0);
                }

            }
        }
}

}

void delay(int time) {
    clock_t goal = time + clock();
    while (goal > clock());
}

/*
the first letter after 'COLOR' corresponds to the background;
second corresponds the foreground.
each letter has following values:

    0 = Black       8 = Gray
    1 = Blue        9 = Light Blue
    2 = Green       A = Light Green
    3 = Aqua        B = Light Aqua
    4 = Red         C = Light Red
    5 = Purple      D = Light Purple
    6 = Yellow      E = Light Yellow
    7 = White       F = Bright White
*/
void aqua_screen()
{
    system("COLOR 3f");//3f1
}

void red_screen() {
    system("COLOR 4f");//4f
}

void clear_screen() {
    system("cls");
}

void green_screen() {
    system("COLOR 2f");//2f
}

void yellow_screen()
{
    system("COLOR 2f");
}





void printcongo()
{
    yellow_screen();
    clear_screen();
      printf("                                                                                                  \n");
    printf("                                                                                                  \n");
    printf("                                                                                                  \n");
    printf(" ______    _______    .        .       ______     _______      __                                 \n");
    printf("/         /       \\   |\\       |    ,'       \\   /       \\    |  |                                 \n");
    printf("|         |       |   | \\      |   |             |       |    |  |                                \n");
    printf("|         |       |   |  \\     |   |             |       |    |  |                                \n");
    printf("|         |       |   |   \\    |   |     _____   |       |    |  |                                \n");
    printf("|         |       |   |    \\   |   |    |     |  |       |    |  |                                \n");
    printf("|         |       |   |     \\  |   |          |  |       |     \\/               /\\               \n");
    printf("|         |       |   |      \\ |    \\        /   |       |      _              /  \\              \n");
    printf("\\______   \\_______/   |       \\|     \"~~~~~~'    \\_______/     |_|            /____\\             \n");

    delay(70);
    clear_screen();


    printf("                                                                                                  \n");
    printf("                                                                                                  \n");
    printf("                                                                                                  \n");
    printf(" ______    _______    .        .       ______     _______      __                                 \n");
    printf("/         /       \\   |\\       |    ,'       \\   /       \\    |  |                                 \n");
    printf("|         |       |   | \\      |   |             |       |    |  |                                \n");
    printf("|         |       |   |  \\     |   |             |       |    |  |                                \n");
    printf("|         |       |   |   \\    |   |     _____   |       |    |  |                                \n");
    printf("|         |       |   |    \\   |   |    |     |  |       |    |  |              **                \n");
    printf("|         |       |   |     \\  |   |          |  |       |     \\/               /\\               \n");
    printf("|         |       |   |      \\ |    \\        /   |       |      _              /  \\              \n");
    printf("\\______   \\_______/   |       \\|     \"~~~~~~'    \\_______/     |_|            /____\\             \n");

    delay(70);
    clear_screen();

    printf("                                                                                                  \n");
    printf("                                                                                                  \n");
    printf("                                                                                                  \n");
    printf(" ______    _______    .        .       ______     _______      __                                 \n");
    printf("/         /       \\   |\\       |    ,'       \\   /       \\    |  |                                 \n");
    printf("|         |       |   | \\      |   |             |       |    |  |                                \n");
    printf("|         |       |   |  \\     |   |             |       |    |  |                                \n");
    printf("|         |       |   |   \\    |   |     _____   |       |    |  |              **                \n");
    printf("|         |       |   |    \\   |   |    |     |  |       |    |  |              **                \n");
    printf("|         |       |   |     \\  |   |          |  |       |     \\/               /\\               \n");
    printf("|         |       |   |      \\ |    \\        /   |       |      _              /  \\              \n");
    printf("\\______   \\_______/   |       \\|     \"~~~~~~'    \\_______/     |_|            /____\\             \n");

    delay(70);
    clear_screen();

    printf("                                                                                                  \n");
    printf("                                                                                                  \n");
    printf("                                                                                                  \n");
    printf(" ______    _______    .        .       ______     _______      __                                 \n");
    printf("/         /       \\   |\\       |    ,'       \\   /       \\    |  |                                 \n");
    printf("|         |       |   | \\      |   |             |       |    |  |                                \n");
    printf("|         |       |   |  \\     |   |             |       |    |  |              **                \n");
    printf("|         |       |   |   \\    |   |     _____   |       |    |  |             *\\/*              \n");
    printf("|         |       |   |    \\   |   |    |     |  |       |    |  |             *\\/*              \n");
    printf("|         |       |   |     \\  |   |          |  |       |     \\/               /\\               \n");
    printf("|         |       |   |      \\ |    \\        /   |       |      _              /  \\              \n");
    printf("\\______   \\_______/   |       \\|     \"~~~~~~'    \\_______/     |_|            /____\\             \n");


    delay(70);
    clear_screen();

    printf("                                                                                                  \n");
    printf("                                                                                                  \n");
    printf("                                                                                                  \n");
    printf(" ______    _______    .        .       ______     _______      __                                 \n");
    printf("/         /       \\   |\\       |    ,'       \\   /       \\    |  |                                 \n");
    printf("|         |       |   | \\      |   |             |       |    |  |              **                \n");
    printf("|         |       |   |  \\     |   |             |       |    |  |             *\\/*               \n");
    printf("|         |       |   |   \\    |   |     _____   |       |    |  |             *\\/*               \n");
    printf("|         |       |   |    \\   |   |    |     |  |       |    |  |             *\\/*               \n");
    printf("|         |       |   |     \\  |   |          |  |       |     \\/               /\\                \n");
    printf("|         |       |   |      \\ |    \\        /   |       |      _              /  \\               \n");
    printf("\\______   \\_______/   |       \\|     \"~~~~~~'    \\_______/     |_|            /____\\              \n");


    delay(70);
    clear_screen();

    printf("                                                                                                  \n");
    printf("                                                                                                  \n");
    printf("                                                                                                  \n");
    printf(" ______    _______    .        .       ______     _______      __               * *               \n");
    printf("/         /       \\   |\\       |    ,'       \\   /       \\    |  |            *  *  *             \n");
    printf("|         |       |   | \\      |   |             |       |    |  |            *\\\\//*              \n");
    printf("|         |       |   |  \\     |   |             |       |    |  |            *\\\\\//*              \n");
    printf("|         |       |   |   \\    |   |     _____   |       |    |  |             *\\\/*               \n");
    printf("|         |       |   |    \\   |   |    |     |  |       |    |  |             *\\\/*               \n");
    printf("|         |       |   |     \\  |   |          |  |       |     \\/               /\\                \n");
    printf("|         |       |   |      \\ |    \\        /   |       |      _              /  \\               \n");
    printf("\\______   \\_______/   |       \\|     \"~~~~~~'    \\_______/     |_|            /____\\              \n");


    delay(70);
    clear_screen();

    printf("                                                                                                  \n");
    printf("                                                                                                  \n");
    printf("                                                                            *        *            \n");
    printf(" ______    _______    .        .       ______     _______      __            \\      /             \n");
      printf("/         /       \\   |\\       |    ,'       \\   /       \\    |  |            \\*\\/*/*             \n");
      printf("|         |       |   | \\      |   |             |       |    |  |           *\\\\||//*             \n");
    printf("|         |       |   |  \\     |   |             |       |    |  |             \\\\\//               \n");
    printf("|         |       |   |   \\    |   |     _____   |       |    |  |            *\\\\\//*              \n");
    printf("|         |       |   |    \\   |   |    |     |  |       |    |  |             *\\\/*               \n");
    printf("|         |       |   |     \\  |   |          |  |       |     \\/               /\\                \n");
    printf("|         |       |   |      \\ |    \\        /   |       |      _              /  \\               \n");
    printf("\\______   \\_______/   |       \\|     \"~~~~~~'    \\_______/     |_|            /____\\              \n");

    delay(70);
    clear_screen();

    printf("                                                                                                  \n");
    printf("                                                                           *          *           \n");
    printf("                                                                            \\        /            \n");
    printf(" ______    _______    .        .       ______     _______      __           *\\   *  /*            \n");
      printf("/         /       \\   |\\       |    ,'       \\   /       \\    |  |           \\\\*\\/*//             \n");
      printf("|         |       |   | \\      |   |             |       |    |  |           *\\\\||//*             \n");
    printf("|         |       |   |  \\     |   |             |       |    |  |            \\\\\\\///              \n");
    printf("|         |       |   |   \\    |   |     _____   |       |    |  |          **\\\\\\///**            \n");
    printf("|         |       |   |    \\   |   |    |     |  |       |    |  |             \\\\//               \n");
    printf("|         |       |   |     \\  |   |          |  |       |     \\/               /\\                \n");
    printf("|         |       |   |      \\ |    \\        /   |       |      _              /  \\               \n");
    printf("\\______   \\_______/   |       \\|     \"~~~~~~'    \\_______/     |_|            /____\\              \n");

    delay(70);
    clear_screen();


    printf("                                                                          _            _          \n");
    printf("                                                                         * \\          / *         \n");
    printf("                                                                           _\\    *   /_           \n");
      printf(" ______    _______    .        .       ______     _______      __         * \\\\ *\\/ *// *          \n");
      printf("/         /       \\   |\\       |    ,'       \\   /       \\    |  |          _\\\\ || //_            \n");
    printf("|         |       |   | \\      |   |             |       |    |  |         * \\\\\\||/// *           \n");
    printf("|         |       |   |  \\     |   |             |       |    |  |          _ \\\\\\/// _            \n");
    printf("|         |       |   |   \\    |   |     _____   |       |    |  |         *  \\\\\\///  *           \n");
    printf("|         |       |   |    \\   |   |    |     |  |       |    |  |        *    \\\\//    *          \n");
    printf("|         |       |   |     \\  |   |          |  |       |     \\/               /\\                \n");
    printf("|         |       |   |      \\ |    \\        /   |       |      _              /  \\               \n");
    printf("\\______   \\_______/   |       \\|     \"~~~~~~'    \\_______/     |_|            /____\\              \n");

    delay(70);
    clear_screen();


    printf("                                                                         __            __         \n");
    printf("                                                                       **  \\          /  **       \n");
    printf("                                                                          __\\  * * * /__          \n");
      printf(" ______    _______    .        .       ______     _______      __       **  \\\\ *\\/ *//  **        \n");
      printf("/         /       \\   |\\       |    ,'       \\   /       \\    |  |         __\\\\ || //__           \n");
    printf("|         |       |   | \\      |   |             |       |    |  |       **__\\\\\\||///__**         \n");
    printf("|         |       |   |  \\     |   |             |       |    |  |        *  \\\\\\\\////  *          \n");
    printf("|         |       |   |   \\    |   |     _____   |       |    |  |      *     \\\\\\///     *        \n");
    printf("|         |       |   |    \\   |   |    |     |  |       |    |  |             \\\\//               \n");
    printf("|         |       |   |     \\  |   |          |  |       |     \\/               /\\                \n");
    printf("|         |       |   |      \\ |    \\        /   |       |      _              /  \\               \n");
    printf("\\______   \\_______/   |       \\|     \"~~~~~~'    \\_______/     |_|            /____\\              \n");

    delay(70);
    clear_screen();


    printf("                                                                        ___            ___        \n");
    printf("                                                                       *   \\    * *   /   *       \n");
    printf("                                                                     *   ___\\  * * * /___   *     \n");
      printf(" ______    _______    .        .       ______     _______      __       *   \\\\ *\\/ *//   *        \n");
      printf("/         /       \\   |\\       |    ,'       \\   /       \\    |  |    *   ___\\\\ || //___   *      \n");
    printf("|         |       |   | \\      |   |             |       |    |  |       * __\\\\\\||///__ *         \n");
    printf("|         |       |   |  \\     |   |             |       |    |  |     *  /  \\\\\\\\////  \\  *       \n");
    printf("|         |       |   |   \\    |   |     _____   |       |    |  |       *    \\\\\\///    *         \n");
    printf("|         |       |   |    \\   |   |    |     |  |       |    |  |     *       \\\\//       *       \n");
    printf("|         |       |   |     \\  |   |          |  |       |     \\/               /\\                \n");
    printf("|         |       |   |      \\ |    \\        /   |       |      _              /  \\               \n");
    printf("\\______   \\_______/   |       \\|     \"~~~~~~'    \\_______/     |_|            /____\\              \n");

    delay(70);
    clear_screen();


    printf("                                                                        ___            ___        \n");
    printf("                                                                       /   \\    ***   /   \\       \n");
    printf("                                                                      *  ___\\  * * * /___  *      \n");
    printf(" ______    _______    .        .       ______     _______      __    *  /   \\\\ *\\/ *//   \\  *     \n");
    printf("/         /       \\   |\\       |    ,'       \\   /       \\    |  |     *  ___\\\\ || //___  *       \n");
    printf("|         |       |   | \\      |   |             |       |    |  |    *  / __\\\\\\||///__ \\  *      \n");
    printf("|         |       |   |  \\     |   |             |       |    |  |      * /  \\\\\\\\////  \\ *        \n");
    printf("|         |       |   |   \\    |   |     _____   |       |    |  |     * /    \\\\\\///    \\ *       \n");
    printf("|         |       |   |    \\   |   |    |     |  |       |    |  |      *      \\\\//      *        \n");
    printf("|         |       |   |     \\  |   |          |  |       |     \\/      *        /\\        *       \n");
    printf("|         |       |   |      \\ |    \\        /   |       |      _              /  \\               \n");
    printf("\\______   \\_______/   |       \\|     \"~~~~~~'    \\_______/     |_|            /____\\              \n");

    delay(70);
    clear_screen();


    printf("                                                                        ___      *     ___        \n");
    printf("                                                                       /   \\    ***   /   \\       \n");
    printf("                                                                      /  ___\\  * * * /___  \\      \n");
    printf(" ______    _______    .        .       ______     _______      __    *  /   \\\\ *\\/ *//   \\  *     \n");
    printf("/         /       \\   |\\       |    ,'       \\   /       \\    |  |  *  /  ___\\\\ || //___  \\  *    \n");
    printf("|         |       |   | \\      |   |             |       |    |  |    *  / __\\\\\\||///__ \\  *      \n");
    printf("|         |       |   |  \\     |   |             |       |    |  |    * / /  \\\\\\\\////  \\ \\ *      \n");
    printf("|         |       |   |   \\    |   |     _____   |       |    |  |     * /    \\\\\\///    \\ *       \n");
    printf("|         |       |   |    \\   |   |    |     |  |       |    |  |    * /      \\\\//      \\ *      \n");
    printf("|         |       |   |     \\  |   |          |  |       |     \\/      *        /\\        *       \n");
    printf("|         |       |   |      \\ |    \\        /   |       |      _      *       /  \\       *       \n");
    printf("\\______   \\_______/   |       \\|     \"~~~~~~'    \\_______/     |_|            /____\\              \n");

    delay(70);
}
//tells user if he forgot to press enter before typing
//tells user if he copied and pasted the sentences
void print_typing_speed(int correct_words)
{
    int words_per_minute;
        words_per_minute=correct_words/time_taken_global*60;
        if(time_taken_global==0)//time_taken is stored globally to use its value in this function
            words_per_minute=0;

        if(words_per_minute==0)//if user forgets to press enter before typing
            printf("\n\nYOUR TYPING SPEED is not recorded because forgot to press ENTER KEY before typing");
        else if(words_per_minute>60)//if user copies and pastes
            printf("\n\nYOUR TYPING SPEED is %d words per minute\nYour typing speed is considered EXCELLENT, but you have copied and pasted the sentence ;)",words_per_minute);
        else//print typing speed if user pressed enter and didn't copy and paste
            printf("\n\nYOUR TYPING SPEED is %d words per minute",words_per_minute);

        if(words_per_minute<=12 && words_per_minute!=0)
            printf("\nYour typing speed is considered BELOW AVERAGE");
        else if(words_per_minute> 12 && words_per_minute<=20)
            printf("\nYour typing speed is considered AVERAGE");
        else if(words_per_minute> 20 && words_per_minute<=27)
            printf("\nYour typing speed is considered GOOD");
        else if(words_per_minute> 27 && words_per_minute<=35)
            printf("\nYour typing speed is considered VERY GOOD");
        else if(words_per_minute> 35 && words_per_minute<=60)
            printf("\nYour typing speed is considered EXCELLENT");
        time_taken_global=0.0;//resetting for next itteration otherwise "enter unpressed" statement will not run after running once.

}

//decides the difficulty percentage depending upon the selected level
int set_difficulty_percentage(difficulty_level)
{
    int difficulty_percentage;
    if (difficulty_level == 1)
        difficulty_percentage = 30;
    else if (difficulty_level == 2)
        difficulty_percentage = 50;
    else if (difficulty_level == 3)
        difficulty_percentage = 70;
    else if (difficulty_level == 4)
        difficulty_percentage = 90;
    return difficulty_percentage;
}

//used to take input for difficulty_level,permitted_minutes and memtest_or_tytest()
//1 is minimum allowed integer value
//max is maximum allowed integer value
//good error handling, now even if user enters a lot of space separated words,no error will come.
//maximum allowed string length for answer is 1
int input_number(int max)
{
   if(max==2)
        while(1)
        {
            char input_string[5];
            scanf("%s",&input_string);//input
            int string_length=strlen(input_string);//calculates string length
            int choice=(int)input_string[0];//type conversion of first letter
            if((input_string[0]=='1'||input_string[0]=='2') && string_length==1)
                return choice-48;//ASCII value of '1' is 49
            else
                printf("enter valid input\n");
        }
    else if(max==3)
        while(1)
        {
            char input_string[5];
            scanf("%s",&input_string);
            int string_length=strlen(input_string);//calculates string length
            int choice=(int)input_string[0];//type conversion of first letter
            if((input_string[0]=='1'||input_string[0]=='2'||input_string[0]=='3') && string_length==1)
                return choice-48;//ASCII value of '1' is 49
            else
                printf("enter valid input\n");
        }
    else if(max==4)
        while(1)
        {
            char input_string[5];
            scanf("%s",&input_string);
            int string_length=strlen(input_string);//calculates string length
            int choice=(int)input_string[0];//type conversion of first letter
            if((input_string[0]=='1'||input_string[0]=='2'||input_string[0]=='3'||input_string[0]=='4') && string_length==1)
                return choice-48;//ASCII value of '1' is 49
            else
                printf("enter valid input\n");
        }
}


//after user selects desired level, it gives feedback string to confirm what choice has been recorded
void print_selected_level(int difficulty_level)
{
    if(difficulty_level==1)
        printf("\nOKAY!, you have selected VERY EASY level \n\n");
    else if(difficulty_level==2)
        printf("\nOKAY!, you have selected EASY level \n\n");
    if(difficulty_level==3)
        printf("\nOKAY!, you have selected INTERMIDIATE level \n\n");
    if(difficulty_level==4)
        printf("\nOKAY!, you have selected EXPERT level \n\n");
}

//after successful or unsuccessful typing test decides what has to be done next
void level_repeat_or_next_level(int result,int difficulty_level,int permitted_minutes)
{
    int answer=-1;
    //last level cleared
    if (difficulty_level == 4 && result == 1)
    {
        typing_test_status=1;
        printf("\nPress enter to see your congratulation message :)\n");
        getchar();
        printcongo();
        printcongo();
        printcongo();
        if(memory_test_status==0)
        {
            clear_screen();
            aqua_screen();
            printf("Now would you like to test your memory?\n");
            answer=yes_or_no();
            if(answer==1)
            {
                clear_screen();
                memory_test_menu();
            }
            else if(answer==0)
            {
                    wink_with_mask();
                    wink_with_mask();
                    wink_with_mask();
                    exit(0);
            }
        }
        else if (memory_test_status==1)
        {
            clear_screen();
            printf("You have taken both the tests\n\nPress Enter to see goodbye message");
            getchar();
            wink_with_mask();
            wink_with_mask();
            wink_with_mask();
            exit(0);;
        }
    }
    //last level but not cleared
    if (difficulty_level == 4 && result == 0) {
        printf("\nWould you like to try again?");
        answer = yes_or_no();
        if (answer == 1)
            nextlevel(difficulty_level, result,permitted_minutes);//gives same level again
        else
        {
            typing_test_status=1;
            if(memory_test_status==0)
            {
                clear_screen();
                aqua_screen();
                printf("Now would you like to test your memory?\n");
                answer=yes_or_no();
                if(answer==1)
                {
                    clear_screen();
                    memory_test_menu();
                }
                else if(answer==0)
                {
                    wink_with_mask();
                    wink_with_mask();
                    wink_with_mask();
                    exit(0);
                }
            }
            else
            {
                clear_screen();
                printf("You have taken both the tests\n\nPress Enter to see goodbye message");
                getchar();
                wink_with_mask();
                wink_with_mask();
                wink_with_mask();
                exit(0);
            }
        }
    }
    //1,2 or3 level and cleared
    else if (difficulty_level < 4 && result == 1) {
        printf("\nGREAT!!Would you like to proceed to next level?");
        answer = yes_or_no();//error proof input function
        if (answer == 1)
            nextlevel(difficulty_level, result,permitted_minutes);//takes to next level
        else
            {
            typing_test_status=1;
            if(memory_test_status==0)
            {
                clear_screen();
                aqua_screen();
                printf("Now would you like to test your memory?\n");
                answer=yes_or_no();
                if(answer==1)
                {
                    clear_screen();
                    memory_test_menu();
                }
                else if(answer==0)
                {
                    wink_with_mask();
                    wink_with_mask();
                    wink_with_mask();
                    exit(0);
                }
            }
            else
            {
                clear_screen();
                printf("You have taken both the tests\n\nPress Enter to see goodbye message");
                getchar();
                wink_with_mask();
                wink_with_mask();
                wink_with_mask();
                exit(0);
            }
        }
    }
    //1,2 or 3 level and not cleared
    else if (difficulty_level < 4 && result == 0) {
        printf("\nWould you like to try again?");
        answer = yes_or_no();//error proof input function
        if (answer == 1)
            nextlevel(difficulty_level, result,permitted_minutes);//gives same level again
        else
        {
            typing_test_status=1;
            if(memory_test_status==0)
            {
                clear_screen();
                aqua_screen();
                printf("Now would you like to test your memory?\n");
                answer=yes_or_no();
                if(answer==1)
                    memory_test_menu();
                else if(answer==0)
                {
                    wink_with_mask();
                    wink_with_mask();
                    wink_with_mask();
                    exit(0);
                }
            }
            else
            {
                printf("\nYou've taken both the tests\n");
                delay(2000);
                    wink_with_mask();
                    wink_with_mask();
                    wink_with_mask();
                    exit(0);
            }
        }
    }
}
//if string_compare is passed, time permitted and time taken by user is compared
int result_decide(float time_taken, int string_compare_result,int permitted_minutes) {
    if (string_compare_result || time_taken > permitted_minutes*60) {
        printf("\n\nFinal Result=FAIL\n");//if time taken is more than permitted time then it fails
        red_screen();
        return 0;//FAIL
    } else {
        printf("\n\nFinal Result=PASS\n");//if time taken is less than or equal to permitted time then it passes
        green_screen();
        return 1;//PASS
    }
}
//after first level of typing test, control come to this function
//nextlevel() keeps on calling itself until 4 th level is compeleted or user says no for next level.
void nextlevel(int current_level, int past_result, int permitted_minutes)
{
    aqua_screen();
    int difficulty_level, answer = -1, result = 0, string_compare_result, difficulty_percentage = 0;
    if (past_result == 1)//increases difficulty level if previous level was cleared successfully
        difficulty_level = current_level +1;
    else//keeps level same until it is cleared successfully.
        difficulty_level = current_level;

    node * head1 = NULL, * head2 = NULL;
    char n[500];
    srand(time(0));

    difficulty_percentage = set_difficulty_percentage(difficulty_level);//sets difficulty percentage according to the selected difficulty level

    if (past_result == 1)
        printf("Well done, welcome to next level having %d percent difficulty\n", difficulty_percentage);
    else
        printf("Again this level has %d percent difficulty\n", difficulty_percentage);

    if(permitted_minutes>1)
        printf("Paragraph you have to type:\n\n");
    else if(permitted_minutes==1)
        printf("Sentence you have to type:\n\n");

    print_random_sentence(permitted_minutes,&head1);//prints any random sentence of appropriate number of words, depending upon number of permitted minutes.
    printf("\nPress Enter key when you are ready to start typing and start your %d seconds of time\n",permitted_minutes*60);

    getchar();//waits for user to press enter

    clock_t start, end;
    double time_taken;
    start = clock();//take reading of CPU clock when user presses enter before typing displayed string
    input(n);//user types to displayed string
    end = clock();//take reading of CPU clock when user is done typing the displayed string.
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;//calculates the total time taken to input in seconds.
    time_taken_global=time_taken;//to pass value of time_taken to words_per_minute()
    linked_list( & head2, n);
    string_compare_result = compare(head1, head2, difficulty_level);//compares both displayed and entered string and returns result PASS(1) if accuracy of user is more than required accuracy for that level
    printf("\n\nTime taken to Enter=%lf seconds\nPermitted Time Limit=%d seconds", time_taken,permitted_minutes*60);
    result = result_decide(time_taken, string_compare_result,permitted_minutes);//1 if pass, 0 if fail, compares permitted time with consumed time
    level_repeat_or_next_level(result,difficulty_level,permitted_minutes);//depending on the result of current level, decides if user has to be taken to next level or not

}
// tanish explain this and try using more clear variables names, change ctr and cnt
int compare(node * h1, node * h2, int difficulty_level) {
    if (h2 == NULL) {  //if user does not input anything
        printf("No Input Received\n");
        return 0;
    } else {
        float ctr = 0.0, cnt = 0.0;
        node * temp = h1;
        while (temp != NULL) {
            temp = temp -> next;
            cnt++;
        }
        while(h1!=NULL&&h2!=NULL)  //Main Algorithm
        {
             if((strcmp(h1->data,h2->data))==0)
             {
                 ctr++;
                 h1=h1->next;
                 h2=h2->next;
             }
             else
             {
                 if((strcmp(h1->next->data,h2->data))==0)
                 {
                     ctr++;
                     h2=h2->next;
                     h1=h1->next->next;
                 }
                 else
                 {
                     h1=h1->next;
                     h2=h2->next;
                 }
             }
        }
        printf("\nRESULTS:\nYou entered %.0f words correctly (taking in account all the errors like skipping fullstops/ spaces/ question marks) out of %.0f Words in the given Paragraph\n", ctr, cnt);
        int difficulty_percentage=set_difficulty_percentage(difficulty_level);// sets difficulty percentage value depending upon the difficulty level
        printf("Accuracy Percentage= %f (To pass test Accuracy > %d percent)",(ctr / cnt)*100, difficulty_percentage);
        int correct_words=ctr;
        print_typing_speed(ctr); //prints typing speed and tells if his typing skill is average or above average
        if (((ctr / cnt) * 100) <= difficulty_percentage)//compares accuracy percentage required to pass current level with accuracy of user
            return 1;//PASS
        else
            return 0;//FAIL
    }
}

void input(char * s) {
    gets(s);
}

// tanish explain
void addnode(node ** h, char * s) {
    node * word = (node * ) malloc(sizeof(node));
    word -> next = NULL;
    strcpy(word -> data, s);
    if ( * h == NULL)
        *
        h = word;
    else {
        node * temp = * h;
        while (temp -> next != NULL)
            temp = temp -> next;
        temp -> next = word;
    }
}
// tanish explain
void linked_list(node ** h, char * s) {
    int i, j;
    char temp[20];
    for (i = 0, j = 0; i <= strlen(s); i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            temp[j] = '\0';
            addnode(h, temp);
            j = 0;
        } else {
            temp[j] = s[i];
            j++;
        }
    }
}
//prints random sentence of variable number of words depending on permitted_minutes chosen by user
void print_random_sentence(int permitted_minutes,node ** head1)
{
    int random_i = (rand() % 20);
    //prints sentences with 20 words - 1 minute
    if(permitted_minutes==1)
    {
        linked_list( head1, sentences_20[random_i]);
        puts(sentences_20[random_i]);
    }
    //prints sentences with 35 words - 2 minutes
    else if(permitted_minutes==2)
    {
        linked_list( head1, sentences_35[random_i]);
        puts(sentences_35[random_i]);
    }
    //prints sentences with 50 words - 3 minutes
    else if(permitted_minutes==3)
    {
        linked_list( head1, sentences_50[random_i]);
        puts(sentences_50[random_i]);
    }
}
//asks user if he wants to play memory game or typing test
//first level of typing test is executed here
//
void typing_test() {
    aqua_screen();
    clear_screen();
    printtypingtest();
    int difficulty_level = 0;
    node * head1 = NULL, * head2 = NULL;
    char n[500];
    srand(time(0));


    //asks user to selects 1 among 4 level depending upon accuracy percentage
    printf("What difficulty level do you want?");
    int difficulty_percentage;
    printf("\nPress 1 for VERY EASY level(30 percent difficulty)\nPress 2 for EASY level(50 percent difficulty)\nPress 3 for INTERMIDIATE level(70 percent difficulty)\nPress 4 for EXPERT level(90 percent difficulty)\n");
    difficulty_level=input_number(4);//error proof input, not problem even if user enters multiple space separated words, max=4, min=1(always)
    int permitted_minutes;
    print_selected_level(difficulty_level);//after user selects desired level, it gives feedback string to confirm what choice has been recorded
    printf("Select one of the following:\nPress 1 for - 1 MINUTE TEST\nPress 2 for - 2 MINUTE TEST\nPress 3 for - 3 MINUTE TEST\n");
    permitted_minutes=input_number(3);//error proof input, not problem even if user enters multiple space separated words, max=3, min=1(always)
    clear_screen();
    printf("Type exactly as given (Case Sensitivity and Every Punctuation Mark including spaces should be as it is for accuracy and Time will be recorded)\n\nTime Limit: %d minute (%d seconds)\n\n",permitted_minutes,permitted_minutes*60);

    if(permitted_minutes>1)
        printf("Paragraph you have to type:\n\n");
    else if(permitted_minutes==1)
        printf("Sentence you have to type:\n\n");

    print_random_sentence(permitted_minutes,&head1);//prints random sentence of variable number of words depending upon the selected permitted_minutes
    printf("\nPress Enter key when you are ready to start typing and start your %d seconds of time\n",permitted_minutes*60);
    getchar();
    getchar();//waits for user to press enter before start typing

    clock_t start, end;
    double time_taken;
       start = clock();//take reading of CPU clock when user presses enter before typing displayed string
    input(n);//user types to displayed string
    end = clock();//take reading of CPU clock when user is done typing the displayed string.
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;//calculates the total time taken to input in seconds.
    time_taken_global=time_taken;//to pass value of time_taken to words_per_minute()
    linked_list( & head2, n);
    int string_compare_result = compare(head1, head2, difficulty_level);//compares both displayed and entered string and returns result PASS(1) if accuracy of user is more than required accuracy for that level
    printf("\n\nTime taken to Enter=%lf seconds\nPermitted Time Limit=%d seconds", time_taken,permitted_minutes*60);
    int result = 0, answer = -1;
    result = result_decide(time_taken, string_compare_result ,permitted_minutes);//1 if pass, 0 if fail, compares permitted time with consumed time
    level_repeat_or_next_level(result,difficulty_level,permitted_minutes);//depending on the result of current level, decides if user has to be taken to next level or not
}

/*Driver function of TYPING TEST and MEMORY TEST*/
void main()
{
    aqua_screen();
    printwelcome();//prints welcome message for 1 second
    memory_test_status=0;
    typing_test_status=0;
    int memtest_or_tytest;
    printf("\nPress 1 for typing test\nPress 2 for memory test\n");
    memtest_or_tytest=input_number(2);//error proof input number from user, no problem even if user inputs multiple space separated words
    if (memtest_or_tytest==2)
    {
        memory_test_menu();
    }
    else
    {
        typing_test();
    }
}

