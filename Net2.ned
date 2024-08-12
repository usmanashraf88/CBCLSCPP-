
package lab1;

network Net2
{
    submodules:
       
        hub: Hub {
            @display("p=87,69");
        }
        tx: tx {
            @display("p=20,95");
        }
    connections:
        tx.out --> hub.in++;
}
