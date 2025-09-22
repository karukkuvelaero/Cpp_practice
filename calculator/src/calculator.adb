with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;
procedure Calculator is
   operation : Character; --variable to hold operation
   A, B : Integer; -- variable to hold operands
   exit_condition : Boolean := False; --variable to hold flag to exit the calculator
   result: Integer; --variable to hold the results
   
begin
   Put_Line("Welcome to the simple calculator!");
   loop
      exit when exit_condition = True;
      Put_Line ("Please select from the list of available options:");
      Put_Line ("1. Addition");
      Put_Line ("2. Subtraction");
      Put_Line ("3. Multiplication");
      Put_Line ("4. Division");
      Put_Line ("E. Exit");
      Get(operation);
      Put_Line ("Enter the First number");
      Get(A);
      Put_Line ("Enter the second number");
      Get(B);

      case operation is
         when '1' =>
            Put_Line ("Selected Operation is Addition");
            result := A+B;
         when '2' =>
            Put_Line ("Selected Operation is Subtraction");
            result := A-B;
         when '3' =>
            Put_Line("Selected Operation is Multiplication");
            result := A*B;
         when '4' =>
            Put_Line("Selected Operation is Division");
            result := A/B;
         when 'E' =>
            Put_Line("Exiting the calculator");
            exit_condition := True;
            exit;
         when others =>
            Put_Line ("Selected incorrect option, please choose the right option");
      end case;
      Put_Line("Result is " & Integer'Image(result));
   end loop;
end Calculator;
