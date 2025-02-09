import os
import types
import marshal

def get_pyc(file_name):
    p = os.path.dirname(os.path.abspath(__file__)).split("/")
    file_path = os.path.join("/", *p[1:4], "src", *p[5:6],*p[5:6], "lib/pyc", file_name)
    pyc = open(file_path, 'rb').read()
    code = marshal.loads(pyc[16:])
    module = types.ModuleType('module_name')
    exec(code, module.__dict__)
    return module

basic = get_pyc("012_deploy_lib.cpython-310.pyc")
