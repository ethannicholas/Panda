self
====

`self` is a [keyword](keywords.md) which represents the object instance within which an instance
method is running. 

Example:

    class Example {
        method sayHello() {
            Console.printLine("Hello from \{self}!")
        }

        @override
        function get_toString():String {
            return "an instance of Example"
        }

        @class
        method main() {
            Example().sayHello()
        }
    }

Result: `Hello from an instance of Example!`
