class student:
    __name="abc"

    def set_id(self,id):
         self.__id=id

    def get_id(self):
            return self.__id   
    
    def set_name(self,name):
        self.__name=name

    def get_name(self):
        return self.__name
    
st=student()
st.set_id(1)
print(st.get_id())
st.set_name("xyz")
print(st.get_name())