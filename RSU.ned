
package lab1;


simple myLoc
{
    gates:
        input in;
        output out;
}

network Loc
{
    submodules:
        lcx: myLoc;
        lcy: myTx;
    connections:
        lcx.out --> {  delay = 100ms; } --> lcx.in;
        lcy.in <-- {  delay = 100ms; } <-- tcy.out;
}

