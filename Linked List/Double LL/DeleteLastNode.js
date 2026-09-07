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

function DeleteAtEnd(head){
    
    
    if(!head)
        return console.error("No node found")

    let tail=head

    while(tail.next){
        tail=tail.next
    }
    tail.back.next = null
    
    return head;
}

function main(){
    let arr=[15,22,0,7,96,32]
    let head=convertDLL(arr)
    PrintDLL(head)

    head=DeleteAtEnd(head)
    PrintDLL(head);
}

main()
