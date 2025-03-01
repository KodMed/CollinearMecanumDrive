function [ddxr,ddyr,ddphir] = inertial_pos_control_ddxr_ddyr_ddphir_fun(in1,K_vr,K_p,K_dphir,K_phi,v_max,dphi_max,dxr,dyr,dphir,xr,yr,phir,K_slow)
%INERTIAL_POS_CONTROL_DDXR_DDYR_DDPHIR_FUN
%    [DDXR,DDYR,DDPHIR] = INERTIAL_POS_CONTROL_DDXR_DDYR_DDPHIR_FUN(IN1,K_vr,K_p,K_dphir,K_phi,V_MAX,DPHI_MAX,DXR,DYR,DPHIR,XR,YR,PHIR,K_slow)

%    This function was generated by the Symbolic Math Toolbox version 9.0.
%    18-Oct-2022 22:59:43

state1 = in1(1,:);
state2 = in1(2,:);
state3 = in1(3,:);
state5 = in1(5,:);
state6 = in1(6,:);
state7 = in1(7,:);
t2 = cos(state3);
t3 = sin(state3);
t4 = dxr.^2;
t5 = dyr.^2;
t6 = v_max.^2;
t7 = -t6;
t8 = t4+t5+t7;
t9 = t8.^2;
ddxr = -exp(-K_slow.*abs(dxr-state5.*t2+state6.*t3)).*(K_vr.*dxr+K_p.*t9.*(state1-xr));
if nargout > 1
    ddyr = -exp(-K_slow.*abs(-dyr+state5.*t3+state6.*t2)).*(K_vr.*dyr+K_p.*t9.*(state2-yr));
end
if nargout > 2
    ddphir = -exp(-K_slow.*abs(dphir-state7)).*(K_dphir.*dphir-K_phi.*(dphir.^2-dphi_max.^2).^2.*(phir-state3));
end
