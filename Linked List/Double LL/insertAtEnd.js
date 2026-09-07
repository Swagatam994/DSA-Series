class Node {
  constructor(data, next_node = null, back_node = null) {
    this.data = data;
    this.next = next_node;
    this.back = back_node;
  }
}

function convertDLL(arr) {
    let head=new Node(arr[0])
    let prev=head

    for(i=1;i<arr.length;i++){
        let temp=new Node(arr[i],null,prev)
        prev.next=temp;
        prev=temp

    }
    return head;
}

function PrintDLL(head){
    while(head){
        process.stdout.write(head.data+" ");
        head=head.next;
    }
    console.log();
}

function InsertAtEnd(head,k){
    let newNode=new Node(k);
    
    if(!head)
        return newNode

    let tail=head

    while(tail.next){
        tail=tail.next
    }
    tail.next=newNode
    newNode.back=tail
    return head;
}

function main(){
    let arr=[15,22,0,7,96,32]
    let head=convertDLL(arr)
    PrintDLL(head)

    head=InsertAtEnd(head,4)
    PrintDLL(head);
}

main()
