function [H] = stateJacobian(x, y, z, dx, dy, dz, q0, q1, q2, q3, ax, ay, az, wx, wy, wz, dt)

H = [ 1, 0, 0, dt,  0,  0,   dt^2*(ay*q3 - az*q2),              dt^2*(ay*q2 + az*q3),   -dt^2*(2*ax*q2 - ay*q1 + az*q0),    dt^2*(ay*q0 - 2*ax*q3 + az*q1), 0, 0, 0, -dt^2*(q2^2 + q3^2 - 1/2),      dt^2*(q0*q3 + q1*q2),     -dt^2*(q0*q2 - q1*q3)
    0, 1, 0,  0, dt,  0,  -dt^2*(ax*q3 - az*q1),    dt^2*(ax*q2 - 2*ay*q1 + az*q0),              dt^2*(ax*q1 + az*q3),   -dt^2*(ax*q0 + 2*ay*q3 - az*q2), 0, 0, 0,     -dt^2*(q0*q3 - q1*q2), -dt^2*(q1^2 + q3^2 - 1/2),      dt^2*(q0*q1 + q2*q3);
    0, 0, 1,  0,  0, dt,   dt^2*(ax*q2 - ay*q1),   -dt^2*(ay*q0 - ax*q3 + 2*az*q1),    dt^2*(ax*q0 + ay*q3 - 2*az*q2),              dt^2*(ax*q1 + ay*q2), 0, 0, 0,      dt^2*(q0*q2 + q1*q3),     -dt^2*(q0*q1 - q2*q3), -dt^2*(q1^2 + q2^2 - 1/2);
    0, 0, 0,  1,  0,  0, dt*(2*ay*q3 - 2*az*q2),            dt*(2*ay*q2 + 2*az*q3), -dt*(4*ax*q2 - 2*ay*q1 + 2*az*q0),  dt*(2*ay*q0 - 4*ax*q3 + 2*az*q1), 0, 0, 0, -dt*(2*q2^2 + 2*q3^2 - 1),    dt*(2*q0*q3 + 2*q1*q2),     -2*dt*(q0*q2 - q1*q3);
    0, 0, 0,  0,  1,  0,  -2*dt*(ax*q3 - az*q1),  dt*(2*ax*q2 - 4*ay*q1 + 2*az*q0),            dt*(2*ax*q1 + 2*az*q3), -dt*(2*ax*q0 + 4*ay*q3 - 2*az*q2), 0, 0, 0,     -2*dt*(q0*q3 - q1*q2), -dt*(2*q1^2 + 2*q3^2 - 1),    dt*(2*q0*q1 + 2*q2*q3);
    0, 0, 0,  0,  0,  1, dt*(2*ax*q2 - 2*ay*q1), -dt*(2*ay*q0 - 2*ax*q3 + 4*az*q1),  dt*(2*ax*q0 + 2*ay*q3 - 4*az*q2),            dt*(2*ax*q1 + 2*ay*q2), 0, 0, 0,    dt*(2*q0*q2 + 2*q1*q3),     -2*dt*(q0*q1 - q2*q3), -dt*(2*q1^2 + 2*q2^2 - 1);
    0, 0, 0,  0,  0,  0,                      1,                                 0,                                 0,                                 0, 0, 0, 0,                         0,                         0,                         0;
    0, 0, 0,  0,  0,  0,                      0,                                 1,                                 0,                                 0, 0, 0, 0,                         0,                         0,                         0;
    0, 0, 0,  0,  0,  0,                      0,                                 0,                                 1,                                 0, 0, 0, 0,                         0,                         0,                         0;
    0, 0, 0,  0,  0,  0,                      0,                                 0,                                 0,                                 1, 0, 0, 0,                         0,                         0,                         0;
    0, 0, 0,  0,  0,  0,                      0,                                 0,                                 0,                                 0, 1, 0, 0,                         0,                         0,                         0;
    0, 0, 0,  0,  0,  0,                      0,                                 0,                                 0,                                 0, 0, 1, 0,                         0,                         0,                         0;
    0, 0, 0,  0,  0,  0,                      0,                                 0,                                 0,                                 0, 0, 0, 1,                         0,                         0,                         0;
    0, 0, 0,  0,  0,  0,                      0,                                 0,                                 0,                                 0, 0, 0, 0,                         1,                         0,                         0;
    0, 0, 0,  0,  0,  0,                      0,                                 0,                                 0,                                 0, 0, 0, 0,                         0,                         1,                         0;
    0, 0, 0,  0,  0,  0,                      0,                                 0,                                 0,                                 0, 0, 0, 0,                         0,                         0,                         1]


end