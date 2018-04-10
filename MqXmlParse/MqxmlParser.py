import sys

sys.path.append('../')
sys.path.append('../../')
from xml.dom.minidom import parse

xmlFile = r'C:\workspace\CocoNut\description\Coco.xml'


class MqXmlParser(object):
    '''
    classdocs
    '''

    def __init__(self, xmlFile):
        '''
        Constructor
        '''
        try:
            self.xmlDoc = parse(xmlFile)
        except IOError:
            print('input/output set up incorrectly')

    def get_msg_element(self, predefine_msg_name, element):
        for msg in self.xmlDoc.getElementsByTagName('I2CMsg'):
            try:
                if msg.getElementsByTagName('predefinedname')[0].firstChild.nodeValue == predefine_msg_name:
                    return msg.getElementsByTagName(element)[0].firstChild.nodeValue
            except AttributeError or IndexError:
                print('tag name not defined')

    def get_signal_element(self, predefine_msg_name, predefine_signal_name, element):
        for msg in self.xmlDoc.getElementsByTagName('I2CMsg'):
            try:
                if msg.getElementsByTagName('predefinedname')[0].firstChild.nodeValue == predefine_msg_name:
                    for signal in msg.getElementsByTagName('signals')[0].getElementsByTagName('signal'):
                        if signal.getElementsByTagName('predefinedName')[0].firstChild.nodeValue == predefine_signal_name:
                            return signal.getElementsByTagName(element)[0].firstChild.nodeValue
            except AttributeError or IndexError:
                print('tag name not defined')


if __name__ == '__main__':
    mqxml = MqXmlParser(xmlFile)
    print(mqxml.get_msg_element('wheelSpeed_1', 'predefinedname'))
    print(mqxml.get_msg_element('wheelSpeed_1', 'actualName'))
    print(mqxml.get_msg_element('wheelSpeed_1', 'InitValue'))
    print(mqxml.get_msg_element('wheelSpeed_1', 'InitValue'))
    print(mqxml.get_msg_element('wheelSpeed_1', 'InitValue'))
    print(mqxml.get_msg_element('wheelSpeed_1', 'InitValue'))
    print(mqxml.get_msg_element('wheelSpeed_1', 'InitValue'))
    print(mqxml.get_msg_element('wheelSpeed_1', 'InitValue'))
    print(mqxml.get_msg_element('wheelSpeed_1', 'InitValue'))
    print(mqxml.get_msg_element('wheelSpeed_1', 'InitValue'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
    print(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_CRC', 'enable'))
