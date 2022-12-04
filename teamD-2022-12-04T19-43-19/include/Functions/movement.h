using namespace vex;

class Functions {
  public:
    // Movement Function
    static void setVel(double AxisOne, double AxisTwo);
    static void setVolt(double AxisOne, double AxisTwo);
    static void setStop(brakeType type);
    static void driveControl();
};