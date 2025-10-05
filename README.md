## Task Description: C++ and ROS2 Concepts
</hr>
In this exercise, you will work with the C++ publisher and subscriber nodes from the ROS2 tutorial:</br>
“Writing a simple publisher and subscriber”.</br></br>
<b>Goal</b>: Analyze the code and answer conceptual questions related to C++ and ROS2 programming.
<hr></hr>
<h3>1. Includes and Usings</h3>
<hr>
<ul>
  <li>The first 4 lines are called standard C++ headers that are used through the class definition.</li>
  <li><b>#include "rclcpp/rclcpp.hpp"</b>: allows to use the most common pieces of the ROS 2 system (in this case it was used as the class inherits from the Node superclass)</li>
  <li><b>#include "std_msgs/msg/string.hpp"</b>: includes built-in messages that will be used/displayed while publishing the data.</br>Example: auto message = std_msgs::msg::String();</li>
  <li><b>using namespace std::chrono_literals</b>: This line of code (mainly namespace) help us to prevent of rewriting the name of the namespace whenever we want to access something inside the scope of this namespace.</br>Example: the 500ms used in the callback would have been <b>std::chrono::milliseconds(500)</b> if this line was not invoked.</li>
</ul>
<hr>
<h3>2. Classes and Inheritance in C++</h3>
<hr>
<ul>
  <li><a href="https://github.com/antoniossaliba/ROS2-CPP-Mini-Deliverable/tree/classes_and_inheritance/classes">Explain how to define a class in C++</a></li>
  <li><a href="https://github.com/antoniossaliba/ROS2-CPP-Mini-Deliverable/tree/classes_and_inheritance/inheritance">Show how a class can extend (inherit from) another class</a></li>
  <li>In our case, we do have a class named <b>MinimalPublisher</b> that inherits publically (public inheritance, as we do have in C++ multiple types of inheritance such as: public, protected, and private inheritance) from the <b>Node</b> class situated in the std_msgs package as a way to send a message (msg extension) with the use of topics. Then we do have the class definition that involves the constructor definition, in addition to tthe private data members which includes the callback() function and some private data members as attributes.</li>
</ul>
<hr>
