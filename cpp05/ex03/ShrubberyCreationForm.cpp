#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm ( const std::string target ) : Form("Shrubbery", 137, 145),
                                                                            _target(target) {
    std::cout << "ShrubberyCreationForm consructor was called!" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm () {
    std::cout << "ShrubberyCreationForm desructor was called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm ( const ShrubberyCreationForm& other ) : Form(other),
                                                                                     _target(other._target) {
    std::cout << "ShrubberyCreationForm COPY consructor was called!" << std::endl;
    operator = (other);
}

ShrubberyCreationForm &ShrubberyCreationForm::operator = ( const ShrubberyCreationForm& other ) {
    std::cout << "ShrubberyCreationForm assignation operator was called!" << std::endl;
    if (this == &other)
        return *this;
    return *this;
}

const std::string       ShrubberyCreationForm::getShrubberyTarget() const {
    return this->_target;
}

void		ShrubberyCreationForm::action() const {
	std::ofstream   file;

	file.open((this->getShrubberyTarget() + "_shrubbery").c_str());
	if (!file.is_open())
		std::cout << "Fd error!" << std::endl;
	else {
		file <<
"		          _{\\ _{\\{\\/}/}/}__ \n" <<
"             {/{/\\}{/{/\\}(\\}{/\\} _ \n" <<
"            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _ \n" <<
"         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\} \n" <<
"        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/} \n" <<
"       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/} \n" <<
"      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\} \n" <<
"      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\} \n" <<
"     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\} \n" <<
"      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/} \n" <<
"       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_) \n" <<
"      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/} \n" <<
"       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\} \n" <<
"         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\} \n" <<
"          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_) \n" <<
"            {/{/{\\{\\/}{/{\\{\\{\\(_)/} \n" <<
"             {/{\\{\\{\\/}/}{\\{\\}/} \n" <<
"              {){/ {\\/}{\\/} \\}\\} \n" <<
"              (_)  \\.-'.-/ \n" <<
"          __...--- |'-.-'| --...__ \n" <<
"   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__ \n" <<
" -\"    ' .  . '    |.'-._| '  . .  '   jro \n" <<
" .  '-  '    .--'  | '-.'|    .  '  . ' \n" <<
"          ' ..     |'-_.-| \n" <<
"  .  '  .       _.-|-._ -|-._  .  '  . \n" <<
"              .'   |'- .-|   '. \n" <<
"  ..-'   ' .  '.   `-._.-�   .'  '  - . \n" <<
"   .-' '        '-._______.-'     '  . \n" <<
"        .      ~, \n" <<
"    .       .   |\\   .    ' '-. \n" <<
"    ___________/  \\____________ \n" <<
"   /  Why is it, when you want \\ \n" <<
"  |  something, it is so damn   | \n" <<
"  |    much work to get it?     | \n" <<
"   \\___________________________/ \n";
		file.close();
	}
}

void		            ShrubberyCreationForm::execute( Bureaucrat const &bur ) const {
    Form::execute(bur);
    this->action();
}

