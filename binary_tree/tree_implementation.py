class Tree:
    def __init__(self, val):
        self.val = val
        self.children = []
        self.parent = None
    
    def add_child(self, child):
        child.parent = self
        self.children.append(child)    
        
    def get_level(self):
        level = 0
        p = self.parent
        while p:
            level += 1
            p = p.parent
        return level 
    
    def print_tree(self):
        spaces = ' ' * self.get_level() * 3
        prefix = spaces + '|--' if self.parent else ""
        print(prefix + self.val)
        if self.children:
            for child in self.children:
                child.print_tree()
def build_product_tree():
    root = Tree('Electronics')
    laptop = Tree('Laptop')
    phone = Tree('Phone')
    root.add_child(laptop)
    root.add_child(phone)
    phone.add_child(Tree('samsung'))
    return root

def build_company():
    root = Tree('Nilupul (CEO)')
    
if __name__ == '__main__':
    root = build_product_tree()
    root.print_tree()
    
    