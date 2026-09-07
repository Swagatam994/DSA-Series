class Node{
    constructor(data,next=null,prev=null){
        this.data=data;

        this.next=next;

        this.prev=prev;
    }
}

let arr=[2,6,8,0,4]

let head=new Node(arr[0]);

console.log(head)

console.log(head.data);