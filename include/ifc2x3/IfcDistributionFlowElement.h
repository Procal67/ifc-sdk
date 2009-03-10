/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCDISTRIBUTIONFLOWELEMENT_H
#define IFC2X3_IFCDISTRIBUTIONFLOWELEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcDistributionElement.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcDistributionFlowElement : public IfcDistributionElement {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the inverse attribute 'HasControlElements'.
         * 
         */
        Inverse_Set_IfcRelFlowControlElements_0_1 &getHasControlElements();
        /**
         * (const) Returns the value of the explicit attribute 'HasControlElements'.
         * 
         * @return the value of the explicit attribute 'HasControlElements'
         */
        virtual const Inverse_Set_IfcRelFlowControlElements_0_1 &getHasControlElements() const;
        friend class IfcRelFlowControlElements;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcDistributionFlowElement(Step::Id id, Step::SPFData *args);
        virtual ~IfcDistributionFlowElement();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDistributionFlowElement &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverse_Set_IfcRelFlowControlElements_0_1 m_hasControlElements;

    };

}

#endif // IFC2X3_IFCDISTRIBUTIONFLOWELEMENT_H
