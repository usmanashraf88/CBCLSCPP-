
package lab1;

//
// TODO auto-generated type
//
network Node
{
    submodules:
        tic1: Tx;
        toc1: Tx;
    connections:
        tic1.out --> {  delay = 100ms; } --> toc1.in;
        tic1.in <-- {  delay = 100ms; } <-- toc1.out;
}
