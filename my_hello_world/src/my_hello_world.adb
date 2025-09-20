with Ada.Text_IO; use Ada.Text_IO;
procedure My_Hello_World is
   Name : String(1..20);
   Length : Integer;
begin
   Put("Enter your name: ");
   Get_Line(Name, Length);
   Put_Line("Hi " & Name(1..Length) & ", Welcome da ");
end My_Hello_World;
