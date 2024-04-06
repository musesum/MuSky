import XCTest
import MuFlo //?????
//@testable import MuSky

final class MuSkyTests: XCTestCase {
    func testExample() throws {
        //XCTAssert(MuSkyVm())
    }

//func parse(_ name: String,_ root: Flo) -> Int {
//        if let script = read(name)
//           floParse.parseScript(root, script) {
//            print (name +  " ✓")
//            return 0
//        } else {
//            print(name + " ⁉️ parse failed")
//            return 1
//        }
//    }

//?????    func readSky(_ filename: String) -> String? {
//        return read(filename, "flo.h")
//    }
//
//    func parseSky(_ name: String, _ root: Flo) -> Int {
//        if let script = read(name, "flo.h"),
//           FloParse().parseScript(root, script) {
//            print (name +  " ✓")
//            return 0
//        } else {
//            print(name + " ⁉️ parse failed")
//            return 1
//        }
//    }

//?????   func testSkyFile(_ inFile: String, out outFile: String) -> Int {
//
//        if let inScript  = read(inFile,  "flo.h"),
//           let outScript = read(outFile, "flo.h") {
//
//            return testParse(inScript, outScript)
//
//        } else {
//            return 1 // error
//        }
//    }


//    func testMidi() { headline(#function)
    //        var err = 0
    //        err += testSkyFile("midi",  out: "test.midi.output")
    //        XCTAssertEqual(err, 0)
    //    }
    //
    //    func testShader() { headline(#function)
    //        var err = 0
    //        err += testSkyFile("shader",  out: "test.shader.output")
    //        XCTAssertEqual(err, 0)
    //    }
    //
    //    /// test `DeepMuse` app script
    //    func testMuseSky() { headline(#function)
    //
    //        let root = Flo("√")
    //        var err = 0
    //        err += parseSky("sky", root)
    //        err += parseSky("menu", root)
    //        err += parseSky("shader", root)
    //
    //        let actual = root.scriptRoot([.parens, .def, .edge, .comment, .noLF])
    //        let expect = readSky("test.sky.output") ?? ""
    //        err += ParStr.testCompare(expect, actual)
    //
    //        XCTAssertEqual(err, 0)
    //    }


 static var allTests = [
 //????? ("testMidi", testMidi),
        // ("testMuseSky", testMuseSky),
 ]

}

}
