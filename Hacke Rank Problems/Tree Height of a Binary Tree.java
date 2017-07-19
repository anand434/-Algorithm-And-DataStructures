static int height(Node root) {
      int rh = 0 , lh = 0;
      if(root.left != null)
          lh = 1 + height(root.left);
      if(root.right != null)
          rh = 1 + height(root.right);

      return rh>lh?rh:lh;
  }
