    let dup = temp.next;
      temp.next = dup.next;
      if (dup.next) dup.next.back = temp;
    } else {
      temp = temp.next;
    }
  }
  return head;
}

function main() {
  let arr = [1, 2, 2, 6, 7, 9];
  let