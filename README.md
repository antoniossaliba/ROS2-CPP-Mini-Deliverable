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
